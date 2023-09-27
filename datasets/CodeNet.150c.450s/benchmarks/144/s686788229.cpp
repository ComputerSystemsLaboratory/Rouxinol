#include<bits/stdc++.h>

#define REP(i,n) for(int (i)=0;(i)<(n);++(i))
#define FOR(i,a,b) for(int (i)=(a);i<(b);++(i))
#define ALL(obj) (obj).begin(),(obj).end()
#define space <<" "<<
#define maxs(x,y) (x=max(x,y))
#define mins(x,y) (x=min(x,y))

using namespace std;

using ll = long long; using ull = unsigned long long;
using vb = vector<bool>; using vvb = vector<vb>;
using vi = vector<int>; using vvi = vector<vi>;
using vl = vector<ll>; using vvl = vector<vl>;
using pii = pair<int,int>; using pll = pair<ll,ll>;

const ll MOD = 1e9+7;

int main(){
  int n,m,l;
  cin>>n>>m>>l;
  ll A[n][m]; 
  ll B[m][l];
  ll C[n][l];
  REP(i,n){
    REP(j,l){
      C[i][j]=0;
    }
  }
  REP(i,n){
  REP(j,m){
  cin>>A[i][j];
  }
  }
  REP(i,m){
  REP(j,l){
  cin>>B[i][j];
  }
  }
  REP(i,n){
  REP(j,l){
  REP(k,m){
  C[i][j]+=A[i][k]*B[k][j];
  }
  }
  }
  REP(i,n){
    REP(j,l-1){
      cout<<C[i][j]<<" ";
    }
    cout<<C[i][l-1]<<endl;
  }

}
