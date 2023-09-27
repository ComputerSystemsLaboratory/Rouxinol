#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int main(){
  int map[20][20];
  int n;
  int i,l;
  int a,b;
  int x,y;
  
  for(;;){
    cin>>a>>b;
    if(a==0&&b==0) break;
    
    memset(map,0,sizeof(map));
    cin>>n;
    for(i=0;i<n;i++){
      cin>>x>>y;
      map[y][x]=-1;
    }
    
    for(i=1;i<=b;i++){
      for(l=1;l<=a;l++){
        if(i==1&&l==1){
          map[i][l]=1;
          continue;
        }          
        
        if(map[i][l]==-1)
          map[i][l]=0;
        
        else
          map[i][l]=map[i][l-1]+map[i-1][l];
      }
    }
    
    printf("%d\n",map[b][a]);
  }
  return 0;
}