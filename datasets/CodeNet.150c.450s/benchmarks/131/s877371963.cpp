#include <bits/stdc++.h>

#define int             long long
#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define REPR( i, m )    for( int (i) = (m); (i) >= 0; (i)-- )
#define REPONE( i, n )  FOR( i, 1, n + 1 )
#define ALL( a )        (a).begin(), (a).end()
#define MP              make_pair

using namespace std;
using P = pair<int, int>;

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int MOD = 1e9 + 7;

signed main(){
    string s;
    int L;
    while( cin >> s >> L, L ){
        while( s.size() < L ) s += '0';

        int mi, ma, i = 0;
        map<int, int> mp;
        mp[stoi( s )] = i++;
        while( 1 ){
            sort( ALL( s ) );
            mi = stoi( s );
            reverse( ALL( s ) );
            ma = stoi( s );

            if( mp.find( ma - mi ) != mp.end() ){
                cout << mp[ma - mi] << " " << ma - mi << " " << i - mp[ma - mi] << endl;
                break;
            }
            mp[ma - mi] = i++;
            s = to_string( ma - mi );
            while( s.size() < L ) s += '0';

        }
    }
}
