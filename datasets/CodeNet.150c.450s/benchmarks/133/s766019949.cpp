#include<bits/stdc++.h>
#define M 1000000007
#define pi ld(acos(-1.0))
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define Rep(i,n) for(int i=1;i<(int)(n);i++)
#define repp(i,a,b)  for(int i=a;i<=(int)(b);i++)
#define Repp(i,a,b)  for(int i=a;i>=(int)(b);i--)
#define cs ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi first
#define se second
#define ii pair<int,int>
#define bye(x) {cout<<x<<'\n';return 0;}
typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
    cs
    int d,ans=0;cin>>d;
    vector<int> c(26);
    for(auto &i:c) cin>>i;
    vector<int> cur(26);
    vector<vector<int>> v(d,vector<int>(26));
    rep(i,d) rep(j,26) cin>>v[i][j];
    repp(i,1,d) {
        int x;
        cin>>x;
        ans+=v[i-1][x-1];
        cur[x-1]=-1;
        rep(j,26) {
            cur[j]++;
            ans-=cur[j]*c[j];
        }
        cout<<ans<<'\n';
    }
}