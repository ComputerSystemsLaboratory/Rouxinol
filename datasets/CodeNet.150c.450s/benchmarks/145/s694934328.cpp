#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++) 
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
    string S;
    vector<string> vc;
    map<string, int> cnt;
    while( cin >> S ){
        vc.emplace_back( S );
        cnt[ S ]++;
    }
    int MAX{}, MAX2{};
    string res, res2;
    for( const auto &x: cnt )
    {
        if( MAX < x.second )
        {
            MAX = x.second;
            res = x.first;
        }
        if( MAX2 < (int)(x.first).size() )
        {
            MAX2 = (int)(x.first).size();
            res2 = x.first;
        }
    }
    cout << res << " " << res2 << endl;
    return 0;
}