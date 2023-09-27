#include "bits/stdc++.h"
#define REP(i,n,N) for(ll i=(n);i<(N);i++)
#define RREP(i,n,N) for(ll i=(N-1);i>=(n);i--)
#define CK(n,a,b) ((a)<=(n)&&(n)<(b))
#define ALL(v) (v).begin(), (v).end()
#define MCP(a,b) memcpy(b,a, sizeof(b))
#define p(s) cout<<(s)<<endl
#define p2(a,b) cout<<(a)<<" "<<(b)<<endl
typedef long long ll;
using namespace std;
const ll mod = 1e9+7;
const ll inf =1e18;

ll n, nmin, nmax;
ll P[210];
int main(){
    while(cin>>n>>nmin>>nmax, n!=0){
        REP(i, 0, n) cin>>P[i];

        ll gap=0;
        ll ans;
        sort(P, P+n);
        reverse(P, P+n);

        REP(i, nmin, nmax+1){
            ll d=P[i-1]-P[i];
            if(gap<=d){
                gap=d;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
