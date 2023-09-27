#include<iostream>
#include<vector>
using namespace std;
const int MAXN = 1000;
int n;
int d[MAXN];
int f[MAXN];
int t;
void solve(int current,vector<vector<int> > &g){
  if(d[current] > 0)return;
  t++;
  d[current] = t;
  
  for(int next:g[current]){
    solve(next,g);
  }
  t++;
  
  f[current] = t;
}

int main(){
  cin >> n;
  vector<vector<int> > g(n+1);
  for(int i = 1;i <= n;i++){
    int u,k;
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      int v;
      cin >> v;
      g[i].push_back(v);
    }
  }
  for(int i = 1;i <= n;i++){
    solve(i,g);
  }
  for(int i = 1;i <= n;i++){
    cout << i << ' ' << d[i] << ' ' << f[i] << endl;
  }
}