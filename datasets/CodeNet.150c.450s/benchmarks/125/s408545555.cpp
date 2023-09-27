#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define FOR(i,a,b) for(int i=(a);i<(b);++(i))
#define REP(i,n) FOR(i,0,n)

#define dump(x) cerr << #x << " = " <<(x)<<endl;
#define debug(x) cerr << #x << " = " <<(x) << "(L" << __LINE__ << ")" << __FILE__ << endl;

using namespace std;
typedef vector<vector<int>> VVI;

VVI mat;
vector<int> d,f,color;
int tt,n;

void dfs_visit(int i){
  int v;
  color[i] = 1;
  d[i]=++tt;
  REP(v,n){
    if(mat[i][v]==0) continue;
    if(color[v]==0){
      dfs_visit(v);
    }
  }
  color[i] = 2;
  f[i] = ++tt;
}
void dfs(int n){
  tt=0;

  int i;
  REP(i,n){
    if(color[i]==0) dfs_visit(i);
  }

  REP(i,n) cout << i+1 << " " << d[i] << " " << f[i] << endl;
}

int main(void){
  int q,k,i,l;
  cin >> n;
  mat=VVI(n, vector<int>(n));
  color=d=f=vector<int>(n);
  REP(i,n){
    cin >> l; l--;
    cin >> q;
    REP(j,q){
      cin >> k; k--;
      mat[l][k]=1;
    }
  }
  dfs(n);

  return 0;
}