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
using PP = pair<int, pair<int, int> >;

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int INFLL = 1e18;
const int MOD = 1e9 + 7;

signed main(){
    int N; cin >> N;
    REP( i, N ){
        string s, t;
        cin >> s >> t;
        int snum = 0, tnum = 0, sdigit = 1, tdigit = 1;
        REP( i, s.size() ){
            if( s[i] == 'm' ){
                snum += sdigit * 1000;
                sdigit = 1;
            }else if( s[i] == 'c' ){
                snum += sdigit * 100;
                sdigit = 1;
            }else if( s[i] == 'x' ){
                snum += sdigit * 10;
                sdigit = 1;
            }else if( s[i] == 'i' ){
                snum += sdigit;
                sdigit = 1;
            }else{
                sdigit = s[i] - '0';
            }
        }
        REP( i, t.size() ){
            if( t[i] == 'm' ){
                tnum += tdigit * 1000;
                tdigit = 1;
            }else if( t[i] == 'c' ){
                tnum += tdigit * 100;
                tdigit = 1;
            }else if( t[i] == 'x' ){
                tnum += tdigit * 10;
                tdigit = 1;
            }else if( t[i] == 'i' ){
                tnum += tdigit;
                tdigit = 1;
            }else{
                tdigit = t[i] - '0';
            }
        }

        int sum = snum + tnum;
        if( sum / 1000 > 1 ) cout << sum / 1000;
        if( sum / 1000 > 0 ) cout << 'm';
        sum -= sum / 1000 * 1000;
        if( sum / 100 > 1 ) cout << sum / 100;
        if( sum / 100 > 0 ) cout << 'c';
        sum -= sum / 100 * 100;
        if( sum / 10 > 1 ) cout << sum / 10;
        if( sum / 10 > 0 ) cout << 'x';
        sum -= sum / 10 * 10;
        if( sum > 1 ) cout << sum;
        if( sum > 0 ) cout << 'i';
        cout << endl;
    }
}

