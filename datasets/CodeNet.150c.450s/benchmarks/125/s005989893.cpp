#include <bits/stdc++.h>
using namespace std;

vector<int> d, f;
int g[111][111];
int n;
int cnt;

void dfs(int now){
  bool flag = false;
  if(d[now] != 0) flag = true;
  else{
    cnt++;
    d[now] = cnt;
  }
  for(int i = 1; i <= n; i++){
    if(g[now-1][i-1] == 1 && d[i] == 0){
      dfs(i);
    }
  }
  cnt++;
  if(flag) cnt--;
  if(f[now] == 0) f[now] = cnt;
}

int main(){

  memset(g,0,sizeof(g));
  d.resize(111);
  f.resize(111);
  cin >> n;

  for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < b; i++){
      int c;
      cin >> c;
      g[a-1][c-1] = 1;
    }
  }

  for(int i = 0; i < n; i++){
    dfs(i+1);
  }

  for(int i = 0; i < n; i++){
    cout << i+1 << " " << d[i+1] << " " << f[i+1] << endl;
  }





}