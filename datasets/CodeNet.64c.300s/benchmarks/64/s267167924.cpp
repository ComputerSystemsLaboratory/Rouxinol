#include <iostream>
using namespace std;
int main()
{
    long long x,y;
    cin >> x >> y;
    if(x < y)
    {
        long long t = y;
        y = x;
        x = t;
    }
    while(1)
    {
        long long z = x % y;
        if(z == 0)
        {
            break;
        }
        else
        {
            x = y;
            y = z;
        }
    }
    long long a;
    for(int i = 1;i < y + 1;i++)
    {
        if(x % i == 0 && y % i == 0)
        {
            a = i;
        }
    }
    cout << a << endl;
}