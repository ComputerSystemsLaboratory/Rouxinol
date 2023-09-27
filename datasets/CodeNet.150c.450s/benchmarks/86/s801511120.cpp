#include <iostream>

using namespace std;

int main()
{
    for(;;) {
        int n, m, p;
        cin >> n >> m >> p;
        if ( n == 0 && m == 0 && p == 0 )
            break;
        
        int total = 0, prizewinners;
        for( int i=0; i<n; ++i ) {
            int x;
            cin >> x;

            if ( i == m - 1 ) {
                prizewinners = x;
            }
            total += x;
        }

        if ( prizewinners != 0 ) {
            int const g = total * 100 - ( total * p );
            cout << ( g / prizewinners ) << endl;
        } else {
            cout << 0 << endl;
        }
    }
}