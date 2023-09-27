#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<assert.h>
#include<numeric>
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

void solve(int n,int m){
    vector<int> cnt1(2000000);
    vector<int> a(n+1),b(m+1);
    rep(i,n)cin>>a[i+1];
    rep(i,n)a[i+1]+=a[i];
    rep(i,n+1)REP(j,i+1,n+1)cnt1[a[j]-a[i]]++;
    rep(i,m)cin>>b[i+1];
    rep(i,m)b[i+1]+=b[i];
    ll ans=0;
    rep(i,m+1)REP(j,i+1,m+1)ans+=cnt1[b[j]-b[i]];
    cout<<ans<<endl;
}


int main(){
    int n,m;
    while(cin>>n>>m,n!=0)solve(n,m);
    return 0;
}
