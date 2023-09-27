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
    while( cin >> S ){
        vc.emplace_back( S );
    }
    int tmp{}, tmp2{},  MAX{}, MAXS{}, res{}, res2{};
    REP( i, (int)vc.size() )
    {
        tmp = count( ALL(vc), vc[ i ] );
        tmp2 = vc[ i ].size();
        if( MAX < tmp )
        {
            MAX = tmp;
            res = i;
        }
        if( MAXS < tmp2 )
        {
            MAXS = tmp2;
            res2 = i;
        }
    }
    cout << vc[ res ] << " " << vc[ res2 ] << endl;
    return 0;
}