#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

signed main(){
  int n;
  while(cin>>n){
    if(n>36)cout<<0<<endl;
    else{
      int sum,ans=0;
      rep(i,10){
        rep(j,10){
          rep(k,10){
            sum=(i+j+k);
            if(n-sum>=0&&n-sum<10)ans++;
          }
        }
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}