#include<iostream>
using namespace std;

int Digit(int x)
{
    int i = 10;
    int digit = 0;

    while(x != 0)
    {
        x = x / i;
        digit++;
    }

    return digit;
}

int main()
{
    int a,b;

    while(cin >> a >> b)
    {
            cout << Digit(a+b) << endl;
    }

    return 0;
}

