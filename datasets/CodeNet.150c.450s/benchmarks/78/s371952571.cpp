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

int main(){
    int n=1000001;
    vector<int> dp(n,inf),dp2(n,inf);
    dp[0]=dp2[0]=0;
    vector<int> a;
    rep(i,300){
        int x=(i+1)*(i+2)*(i+3)/6;
        if(x>n)break;
        a.push_back(x);
    }
    rep(i,a.size()){
        rep(j,n)if(j+a[i]<n)dp[j+a[i]]=min(dp[j+a[i]],dp[j]+1);
        if(a[i]%2==0)continue;
        rep(j,n)if(j+a[i]<n)dp2[j+a[i]]=min(dp2[j+a[i]],dp2[j]+1);
    }
    int x;
    while(cin>>x,x!=0){
        cout<<dp[x]<<" "<<dp2[x]<<endl;
    }
    return 0;
}
