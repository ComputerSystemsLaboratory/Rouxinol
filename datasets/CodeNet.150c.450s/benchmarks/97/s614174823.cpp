#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

typedef pair <int, int> PII;
typedef map <int, PII>  MIP;
int inf = 1<<24;

int main( void )
{
    int n, ni, di;
    while ( cin >> n && n )
    {
        MIP M;
        M[0] = PII( 0, 0 );
        for ( int i = 0; i < n - 1; i++ )
        {
            cin >> ni >> di;
            PII p = M[ni];
            if ( di == 0 ) p.first--;
            if ( di == 1 ) p.second++;
            if ( di == 2 ) p.first++;
            if ( di == 3 ) p.second--;
            M[i+1] = p;
        }

        int minw = inf, maxw = -inf, minh = inf, maxh = -inf;
        for ( int i = 0; i <= n; i++ )
        {
            minw = min( minw, M[i].first );
            maxw = max( maxw, M[i].first );
            minh = min( minh, M[i].second );
            maxh = max( maxh, M[i].second );
        }

        int w = maxw - minw + 1, h = maxh - minh + 1;
        cout << w << " " << h << endl;
    }

    return 0;
}