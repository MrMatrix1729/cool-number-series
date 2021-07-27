#include <iostream>
#include <math.h>

#define MIN 1
#define MAX 99999999

using namespace std;

int main()
{
    unsigned long long int number;

    for (number=MIN; number<=MAX; number++)
    {
        //result is equal to 1 because we do not include 1 later
        //to store result to later compare to var 'number'
        unsigned long long int result=1;

        //i starts at 2 because we don't want to include the original number in factors
        //that is why result is originall 1, to avoid adding it later
        for (unsigned long long int i=2; i<=sqrt(number); i++)
        {
            if ((number%i)==0)
            {
                if (number/i==i)
                    result = result+i;
                else
                    result = result+i+(number/i);
            }
        }

        if (result == number)
            cout << number << endl;
    }
    return 0;
}
