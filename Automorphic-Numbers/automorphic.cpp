#include <iostream>
#include <math.h>

#define MIN 0
#define MAX 999999999999999

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

    for (unsigned long long int number = MIN; number <= MAX; number++)
    {
        int digit = count_digit(number);
        unsigned long long int squaredNumber = number*number;


        squaredNumber -= number;
        if ((squaredNumber % int(pow(10, digit)))==0)
        {
            cout << number << endl;
        }

    }

    return 0;
}
