#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){

  int memo[111]={0};

  int a;
  int ans=0;
  while(scanf("%d",&a) != EOF){
    memo[a]++;
    ans=max(ans,memo[a]);
  }

  
  for(int i=0;i<101;i++){
    if(ans==memo[i]) printf("%d\n",i);
  }

  return 0;
}