#include<cstdio>
#include<iostream>
using namespace std;

int memo[20][20]={0};

int rec(int h,int w){
  if(memo[h][w]!=-1) return memo[h][w];
  memo[h][w] = rec(h-1,w) + rec(h,w-1);
  return memo[h][w];
}

int main(){


  while(1){
    for(int i=1;i<20;i++){
      for(int j=1;j<20;j++){
	memo[i][j]=-1;
      }
    }
    
    int h,w,n;
    scanf("%d %d",&w,&h);
    if(w==0 && h==0) break;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      int a,b;
      scanf("%d %d",&a,&b);
      memo[b][a]=0;
    }
    
    memo[1][0]=1;
    
    printf("%d\n",rec(h,w));

  }  

  return 0;
}