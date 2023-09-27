#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

vector<int> par;
vector<int> depth;

int find(int x){
  if(par[x] == x){
    return x;
  }else{
    return par[x] = find(par[x]);
  }
}

void unite(int x, int y){
  x = find(x);
  y = find(y);
  if (x == y) return;

  if(depth[x] < depth[y]){
    par[x] = y;
  }else{
    par[y] = x;
    if (depth[x] == depth[y]) depth[x]++;
  }
}

bool same(int x,int y){
  return find(x) == find(y);
}
    
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,q;
  cin >> n >> q;
  par.resize(n);
  REP(i,n)par[i] = i;
  depth.resize(n,0);
  REP(i,q){
    int type,x,y;
    cin >> type >> x >> y;
    if(!type){
      unite(x,y);
    }else{
      cout << same(x,y) << endl;
    }
  }
  return 0;
}