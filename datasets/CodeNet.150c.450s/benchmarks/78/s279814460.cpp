#include "bits/stdc++.h"

#define int long long
#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=n;i>=a;--i)
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define mod 1000000007
#define show(n) cerr<<#n<<" = "<<n<<endl
#define showp(n) cerr<<n.fs<<", "<<n.sc<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl
#define showsp(n) for(auto z:n){cerr<<z.fs<<" "<<z.sc<<", "}cerr<<endl

#define yes printf("Yes\n")
#define no printf("No\n")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

const int INF=1LL<<55;

int n;
int a[1000001],b[1000001];
int v;

void ume(){
    REP(i,1,1000001){
        a[i]=b[i]=i;
        for(int j=0;;j++){
            v=j*(j+1)*(j+2)/6;
            if(i-v<0) break;
            a[i]=min(a[i], a[i-v]+1);
            if(v&1) b[i]=min(b[i],b[i-v]+1);
        }
    }
}

void solve(){
    
    cout<<a[n]<<" "<<b[n]<<endl;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ume();
    while(cin>>n,n){
        solve();
    }

    return 0;
}
