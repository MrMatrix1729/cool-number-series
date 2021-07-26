#include <iostream>

#define MIN 1
#define MAX 100

using namespace std;


//to count the number of digit in var 'number'
int count_digit(unsigned long long int number)
{
   int countNumber = 0;
   while(number != 0)
   {
      number = number / 10;
      countNumber++;
   }
   return countNumber;
}

int main()
{

    unsigned long long int number;

    for (number=MIN; number<=MAX; number++)
    {
        int digit = count_digit(number);                    //to store the number of digit in var 'number'

        unsigned long long int numberDuplicate = number;    //to be a copy of number to covert number to array, if this was not done var 'number' will be changed when converted to array
        unsigned long long int numberArray[digit];
        unsigned long long int result=0;                    //to store result to later compare to var 'number'


        //to convert var 'number' to array
        for (int i=(digit-1); i >= 0; i--)
        {
            numberArray[i] = numberDuplicate % 10;
            numberDuplicate /= 10;
        }

        for (int j=0; j<=(digit-1); j++)
        {
            result=numberArray[j]+result;
        }

        if ((number % result)==0)
            cout << number << endl;
    }
        return 0;
}
