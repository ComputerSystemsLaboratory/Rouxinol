#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int flag[30];
  int i,n;
  
  memset(flag,0,sizeof(flag));
  
  for(i=0;i<28;i++){
    cin>>n;
    flag[n-1]=1;
  }
  for(i=0;i<30;i++){
    if(flag[i]!=1)
      printf("%d\n",i+1);
  }
  return 0;
}