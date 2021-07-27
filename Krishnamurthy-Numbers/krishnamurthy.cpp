#include <iostream>

using namespace std;

#define MIN 1
#define MAX 999999999999999
#define ZF 1

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

    unsigned long long int raisedArray[10]= {ZF,1,2,6,24,120,720,5040,40320,362880};

    unsigned long long int number;

    for (number = MIN; number <= MAX; number++)
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
            result=raisedArray[numberArray[j]]+result;
        }

        if (result==number)
            cout << number << endl;
    }
}
