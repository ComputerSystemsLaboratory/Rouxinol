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
  lli r,c,sum=0;
  lli mat[101][101];
  lli sumr[101]={0},sumc[101]={0};

  cin>>r>>c;
  rep(i,r){
    rep(j,c){
      cin>>mat[i][j];
      sumr[i]+=mat[i][j];
      sumc[j]+=mat[i][j];
      cout<<mat[i][j]<<" ";
    }
    cout<<sumr[i]<<endl;
  }
  rep(i,c){
    cout<<sumc[i]<<" ";
    sum += sumc[i];
  }
  cout<<sum<<endl;

  return 0;
}