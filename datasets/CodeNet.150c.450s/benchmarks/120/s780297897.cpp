#include <stdio.h>

#define REP(i,n,m) for(i=n;i<m;i++)
#define rep(i,n) REP(i,0,n)

int h,w;
int ans;
int flg[10],t[10][10000];

int count(void){
  int i,j;
  int tmp, res = 0;

  rep(j,w){
    //1の数を数える
    tmp = 0;
    rep(i,h) if(flg[i] && !t[i][j] || !flg[i] && t[i][j]) tmp++;

    if(tmp < h - tmp) //j列目を裏返した方がいい
      res += h - tmp;
    else //j列目を裏返さない方がいい
      res += tmp;
  }

  return res;
}

void solve(int idx){
  int res;

  if(idx == h){
    res = count();
    if(ans < res) ans = res;
    return;
  }

  //idx行目を裏返さない
  flg[idx] = 0;
  solve(idx+1);

  //idx行目を裏返す
  flg[idx] = 1;
  solve(idx+1);
}

int main(void){
  int i,j;

  while(scanf("%d%d",&h,&w) && (h||w)){
    rep(i,h) rep(j,w) scanf("%d",&t[i][j]);
    ans = 0;
    solve(0);
    printf("%d\n",ans);
  }

  return 0;
}