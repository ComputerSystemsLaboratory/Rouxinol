#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX_R 10
#define MAX_C 10000
int R, C;
int a[MAX_R][MAX_C];
int flg[MAX_R];
int ans;
int count(void) {
  int c = 0;
  int v;
  for(int i = 0; i < C; i++) {
    v = 0;
    for(int j = 0; j < R; j++) {
      if((!flg[j] && a[j][i]) || (flg[j] && !a[j][i])) v++;
    }
    c+= max(v, R - v);
  }
  return c;
}
void dfs(int r) {
  if(r == R) {
    ans = max(ans, count());
    return;
  }
  flg[r] = 0;
  dfs(r + 1);
  flg[r] = 1;
  dfs(r + 1); 
}
int main(void) {
  int n = sizeof(flg);
  while(cin) {
    ans = 0;
    memset(flg, 0, n);
    cin >> R >> C;
    if(R == 0 && C == 0) return 0;
    for(int i = 0; i < R; i++) {
      for(int j = 0; j < C; j++) cin >> a[i][j];
    }
    dfs(0);
    cout << ans << endl;
  }
  return 1;
}