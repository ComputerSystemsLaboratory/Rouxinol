#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for( int i=0; i<n; ++i ) {
        int y, m, d;
        cin >> y >> m >> d;

        const int by = y - 1;
        const int bigyn = by / 3;
        const int smlyn = bigyn * 2 + by % 3;

        const int fyds = ( bigyn * 20 * 10 ) + ( smlyn * ( 20 + 19 ) * 5 );

        const int bm = m - 1;        
        const int fmds = ( y % 3 == 0 )
                                ? bm * 20
                                : ( ( bm / 2 ) * ( 20 + 19 ) ) + ( ( bm % 2 ) * 20 )
                                ;

        cout << ( 196471 - ( fyds + fmds + d ) ) << endl;
    }
}