#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
#define P pair<int,int>
const int MOD=1e9+7;
const int INF=2e9;


int main() {
    ios_base::sync_with_stdio(false);

    int v,e;
    cin >> v >> e;
    vector<vector<ll>> d(v,vector<ll>(v,1e18));
    rep(i,v) d[i][i]=0;
    rep(i,e) {
        int s,t,c;
        cin >> s >> t >> c;
        d[s][t]=c;
    }
    rep(i,v) {
        rep(j,v) {
            rep(k,v) {
                if (d[j][i]!=1e18 && d[i][k]!=1e18) d[j][k]=min(d[j][k],d[j][i]+d[i][k]);
            }
        }
    }
    bool flag=1;
    rep(i,v) {
        if (d[i][i]<0) flag=0;
    }
    if (flag) {
        rep(i,v) {
            rep(j,v) {
                if (d[i][j]==1e18) cout << "INF";
                else cout << d[i][j];
                if (j<v-1) cout << ' ';
            }
            cout << endl;
        }
    } else {
        cout << "NEGATIVE CYCLE" << endl;
    }


    return 0;   
}

