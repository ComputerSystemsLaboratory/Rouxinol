#include<cstdio>
#include<algorithm>
#include<string.h>
#include<iostream>

using namespace std;

int C,R,m[10][10005];

int dfs(int flg){
  int cookies=0;
  for(int i=0;i<R;i++){
    int tmp=0;
    for(int j=0;j<C;j++){
      if((!(flg & (1<<j)) && m[j][i]==0) || ((flg & (1<<j)) && m[j][i]==1))
        tmp++;
    }
    cookies+=max(tmp,C-tmp);
  }

  return cookies;
}


int solve(int x,int flg){
  if(x==C-1){

    return max(dfs(flg | (1<<x)),dfs(flg & (0xFFFF-(1<<x))));
    
  }else{
    return max(solve(x+1,flg | (1<<x)),solve(x+1,flg & (0xFFFF-(1<<x))));
  }
}


int main(){
  while (true){
    scanf("%d%d",&C,&R);
    if(C==0 && R==0) break;
    for(int i=0;i<C;i++)
      for(int j=0;j<R;j++)
        scanf("%d",&m[i][j]);

    printf("%d\n",solve(0,0));
  }

  return 0;
}