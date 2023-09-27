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
  while(cin>>n,n){
    int ans=0;
    loop(i,1,n/2+1){
      int tmp=0;
      for(int j=0;tmp<=n;j++){
        tmp+=i+j;
        if(tmp==n)ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}