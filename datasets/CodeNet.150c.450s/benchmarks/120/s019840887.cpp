#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>

using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 10000000
#define rep(i,j) for(int i=0;i<(j);++i)
#define reps(i,j,k) for(int i=j;i<k;++i)
typedef long long ll;
typedef unsigned long long ull;

int h,w;
int ans;
int f[10],stage[10][10000];

int counter(void){
  int tmp, res = 0;
  rep(j,w){
    tmp = 0;
    rep(i,h)if(f[i] && !stage[i][j] || !f[i] && stage[i][j])tmp++;
    if(tmp < h - tmp)res += h - tmp;
    else res += tmp;
  }
  return res;
}

void solve(int x){
  int res;
  if(x == h){
    res = counter();
    if(ans < res) ans = res;
    return;
  }
  f[x] = 0;
  solve(x+1);
  f[x] = 1;
  solve(x+1);
}

int main(){
  while(scanf("%d%d",&h,&w) && h|w){
    rep(i,h)rep(j,w)scanf("%d",&stage[i][j]);
    ans = 0;
    solve(0);
    printf("%d\n",ans);
  }
  return 0;
}