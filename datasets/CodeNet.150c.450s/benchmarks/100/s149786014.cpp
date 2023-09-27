#include <iostream>
using namespace std;

int main()
{
    int array[20] = {};
    array[0] = 1;
    int n;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
        int carry = 0;
        for(int j=0; j<20; j++)
        {
            /* Multiply by the number and add carry from lower digit */
            array[j] = array[j] * i + carry;
            
            /* Calculate the carry */
            carry = array[j] / 10;
            
            /* Store the quotient to the array*/
            array[j] = array[j] % 10;
        }

    }
    /* Search the maximum digit*/
    int max_digit = 0;
    for(int i=19; i>=0; i--)
    {
        if(array[i])
        {
            max_digit = i;
            break;
        }
    }

    for(int i=max_digit; i>=0; i--)
    {
        cout << array[i];
    }

    cout << endl;
    return 0;
}