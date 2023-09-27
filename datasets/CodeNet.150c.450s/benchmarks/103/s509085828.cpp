#include<iostream>
#include<cstdio>
using namespace std;
int ans,s;
void dfs(int n, int b,int sum);
int main(){
  int n;
  while(1){
    scanf("%d %d",&n,&s);
    ans = 0;
    if(n == 0 && s == 0)break;
    for(int i = 0; i <= 9; i++){
      dfs(n,i,i);
    }
    printf("%d\n",ans);
  }
}
void dfs(int n, int b,int sum){
  if(sum == s && n == 1){
    ans++;
  }
  for(int i = b + 1; i <= 9; i++){
    dfs(n-1,i,sum + i);
  }
}