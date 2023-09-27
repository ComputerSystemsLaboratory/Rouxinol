#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int num;
  int st[31] = {0};
  
  for(int i=0;i<28;i++){
    scanf(" %d",&num);
    st[num] = 1;
  }
  
  for(int i=1;i<=30;i++){
    if(st[i] == 0){
      printf("%d\n",i);
    }
  }
  
  return 0;
}