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
  lli n,m,l,sum;
  lli A[100][100],B[100][100],C[100][100];

  cin>>n>>m>>l;
  rep(i,n){
    rep(j,m){
      cin>>A[i][j];
    }
  }
  rep(i,m){
    rep(j,l){
      cin>>B[i][j];
    }
  }

  rep(i,n){
    rep(j,l){
      sum=0;
      rep(k,m){
	sum += A[i][k]*B[k][j];
      }
      cout<<sum;
      if(j!=l-1)
	cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}