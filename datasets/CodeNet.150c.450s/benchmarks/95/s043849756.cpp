#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define int long long
using namespace std;
const int MOD=1e9+7;
const int INF=1e10;

signed main(){
  int n;
  while(cin>>n,n){
    int left=0,right=0;
    int ans=0;
    string pre="a";
    rep(i,n){
      string s;
      cin>>s;
      if(s=="lu"&&pre=="ru")ans++;
      if(s=="ru"&&pre=="lu")ans++;
      if(s=="ld"&&pre=="rd")ans++;
      if(s=="rd"&&pre=="ld")ans++;
      pre=s;
    }
    cout<<ans<<endl;
  }

 return 0;
}

