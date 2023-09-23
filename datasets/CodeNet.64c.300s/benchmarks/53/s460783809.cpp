#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define FOR(i,a,b) for (lli i=(a);i<(b);i++)
#define REP(i,n) for (lli i=0;i<(n);i++)
#define rep(i,n) for (lli i=0;i<(n);i++)

#define INF INT_MAX/3
#define PB push_back
#define pb push_back
#define all(a) (a).begin(),(a),end()
#define pll pair<lli,lli>

int main(){
  lli a,b,c,ans=0;

  cin>>a>>b>>c;

  FOR(i,a,b+1){
    if(c%i==0)ans++;
  }
      
  cout<<ans<<endl;
  
  return 0;
}