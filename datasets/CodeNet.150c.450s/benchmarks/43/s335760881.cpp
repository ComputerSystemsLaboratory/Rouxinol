#include<iostream>
using namespace std;

int main()
{
    int n;

    while( cin >> n )
    {
        if( n == 0 )
            break;
        int a, b, sum1 = 0, sum2 = 0;
        for( int i = 0; i < n; i++ )
        {
            cin >> a >> b;
            if( a < b )
                sum2 += a + b;
            else if( a > b )
                sum1 += a + b;
            else
            {
                sum1 += a;
                sum2 += b;
            }
        }
        cout << sum1 << " " << sum2 << endl;
    }
    return 0;
}
