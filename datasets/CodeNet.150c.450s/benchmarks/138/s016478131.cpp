#include<iostream>
using namespace std;

void GCD( int a, int b )
{
    int count = 0;
    int r = a % b;                     //余りと値保持の変数
    a = r;

    while( r != 0 )
    {
        if( count % 2 == 0 )
        {    
            r = b % r;
            b = r;
        }
        else
        {
            r = a % r;
            a = r;
        }
        count++;
    }

    if( count % 2 == 0 )
        cout << b << endl;
    else   
        cout << a << endl;

}

int main() 
{
    int x,y;

    cin >> x >> y;

    GCD( x, y );

    return 0;
}
