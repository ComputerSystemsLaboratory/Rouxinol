#include <stdio.h>

int n,s;

int ans;

//depth first search
void dfs(int i,int sum,int n) {

  //³ð
  if((sum==s) && (n==0)) {

    ans++;
    return;

  }

  //s³ð
  if((i==10) || (n==0)) return;

  //Tõr
  dfs(i+1,sum,n); //iðgíÈ¢p^[(±êð»êÈãÅ«È­ÈéÜÅ±¯é)
  dfs(i+1,sum+i,n-1); //iðg¤p^[

}

int main(void) {

  while(scanf("%d %d",&n,&s)!=EOF) {

    if((n==0) && (s==0)) break;

    ans=0;

    dfs(0,0,n);

    printf("%d\n",ans);

  }

  return 0;

}
      