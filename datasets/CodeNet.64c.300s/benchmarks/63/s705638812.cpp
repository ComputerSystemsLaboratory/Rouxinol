#include <iostream>

using namespace std;
long long int firstNumber,secondNumber;

long long int GCD(int x, int y)
{
    while(x!=y)
    {
        if(x<y)
        {
            y = y-x;
        }
        if(y<x)
        {
            x = x-y;
        }
    }
    return x;
}

long long int LCM(int x, int y)
{
    return (x / GCD(x,y))*y;
}



int main()
{   while(cin >> firstNumber >> secondNumber)
    {
        cout << GCD(firstNumber,secondNumber) << " " << LCM(firstNumber,secondNumber) << endl;
    }

}