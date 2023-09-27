#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c, x;

    while( cin >> n >> a >> b >> c >> x )
    {
        if( n + a + b + c + x == 0 )
            break;

        int d[n];
        for( int i = 0; i < n; i++ )
            cin >> d[i];
        
        int target = 0, cnt = 0;
        while( target != n && cnt <= 10000 )
        {
            if( x == d[target] )
            {
                target++;
                if( target == n )
                    break;
            }
            x = ( a * x +  b ) % c;
            cnt++;
        }
        if( cnt > 10000 )
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }

    return 0;
}
