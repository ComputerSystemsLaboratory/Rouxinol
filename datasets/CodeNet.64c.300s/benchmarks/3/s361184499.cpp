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
  lli n;
  lli a[100];
  cin>>n;
  rep(i,n){
    cin>>a[i];
  }
  for(int i=n-1;i>=0;i--){
    cout<<a[i];
    if(i!=0)cout<<" ";
  }

  cout<<endl;
  
  return 0;
}