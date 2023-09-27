#include<iostream>
using namespace std;

int main()
{
    unsigned long long a, b, _a, _b;

    while( cin >> a >> b )          //ユークリッドの互除法
    {
        _a = a;                     
        _b = b;

        while( a > 0 && b > 0)      //余りが0になるまで
        {
            if( a > b )
                a = a % b;
            else
                b = b % a;
        }

        cout << a + b << " " << _a * _b / ( a + b ) << endl;
    
    }

    return 0;
}

