#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define PI 3.14159265359
#define INF 1000100100000000000
#define MOD 1000000007
#define all(x) (x).begin(),(x).end()
typedef long long ll;
#define P pair<int, int>
#define PP pair<P,P>
#define T tuple<int,int,int> 
using namespace std;

int main(){
    int d; cin >> d;
    vector<int> c(26);
    rep(i,26) cin >> c[i];
    vector<vector<int> > s(d);
    rep(i,d)rep(j,26){
        int a; cin >> a;
        s[i].push_back(a);
    }

    vector<int> ld(26,0);

    ll ans=0;
    rep(i,d){
        int t; cin >> t;
        t--;
        ld[t]=i+1;
        ans+=s[i][t];
        rep(j,26){
            ans-=c[j]*(i+1-ld[j]);
        }
        cout << ans << endl;
    }

return 0;
}