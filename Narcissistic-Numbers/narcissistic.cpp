#include <iostream>

#define MIN 0
#define MAX 999999999

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
    unsigned long long int raisedArray[10][9]=
    {
        {0,0,0,0,0,0,0,0,0},
        {1,1,1,1,1,1,1,1,1},
        {2,4,8,16,32,64,128,256,512},
        {3,9,27,81,243,729,2187,6561,19683},
        {4,16,64,256,1024,4096,16384,65536,262144},
        {5,25,125,625,3125,15625,78125,390625,1953125},
        {6,36,216,1296,7776,46656,279936,1679616,10077696},
        {7,49,343,2401,16807,117649,8236543,5764801,40353607},
        {8,64,512,4096,32768,262144,2097152,16777216,134217728},
        {9,81,729,6561,59049,531441,4782969,43046721,387420489},
    };

    unsigned long long int number;
    unsigned long long int n;


    for (n=MIN; n<=MAX; n++)
    {
        number = n;
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
            //cout<<raisedArray[numberArray[j]][digit-1]<<endl;
            result=raisedArray[numberArray[j]][digit-1]+result;
        }

        if (result==number)
           cout << number << endl;
    }
    return 0;
}
