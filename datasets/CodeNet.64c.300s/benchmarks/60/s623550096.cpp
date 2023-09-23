#include<cstdio>
#include<iostream>
using namespace std;

int main(){
  
  while(1){
    
    int memo[20][20]={0};
    int a,b;
    int n;
    int nx,ny;
    
    for(int i=0;i<20;i++){
      for(int j=0;j<20;j++){
	if(i!=0 && j!=0){
	  memo[i][j]=1;
	}
      }
    }
    
    scanf("%d %d",&a,&b);
    if(a==0 && b==0) break;
  
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d %d",&nx,&ny);
      memo[ny][nx]=0;
    }
    
    memo[1][0]=1;
    
    
    for(int i=1;i<=b;i++){
      for(int j=1;j<=a;j++){
	if(memo[i][j]==0);
	else memo[i][j]=memo[i-1][j]+memo[i][j-1];
      }
    }
    
    printf("%d\n",memo[b][a]);
    
    /*
    for(int i=0;i<=b;i++){
      for(int j=0;j<=a;j++){
	printf("%d ",memo[i][j]);
      }
      printf("\n");
    } 
    */

  }
  
  return 0;
}