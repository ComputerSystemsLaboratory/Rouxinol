#include <iostream>
#include <map>
#include <cmath>

using namespace std;

constexpr int dir[][2] = {
    { -1,  0 },
    {  0,  1 },
    {  1,  0 },
    {  0, -1 }
};

int main()
{
    int n;
    while( cin >> n ) {
        if ( n == 0 )
            break;
        
        map<int, pair<int, int>> pos;
        pos[0] = make_pair( 0, 0 );
        int minx = 0, miny = 0;
        int maxx = 0, maxy = 0;

        for( int i=0; i<n-1; ++i ) {
            int ni, di;
            cin >> ni >> di;
            const int x = pos[ni].first + dir[di][0];
            const int y = pos[ni].second + dir[di][1];
            minx = min( minx, x ); miny = min( miny, y );
            maxx = max( maxx, x ); maxy = max( maxy, y );

            pos[i+1] = make_pair( x, y );
        }

        cout << abs( maxx - minx )+1 << " " << abs( maxy - miny )+1 << endl;
    }
}