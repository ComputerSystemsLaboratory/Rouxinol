#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int coin[6] = {500,100,50,10,5,1};

int main(){
  int c,t;
  int ans;
  
  while(true){
    
    scanf(" %d",&c);
    if(c==0)break;
    
    t = 1000 - c;
    
    ans = 0;
    for(int i=0;i<6;i++){
      while(t>=coin[i]){
        t-=coin[i];
        ans++;
      }
    }
    
    printf("%d\n",ans);
  }
  
  return 0;
}