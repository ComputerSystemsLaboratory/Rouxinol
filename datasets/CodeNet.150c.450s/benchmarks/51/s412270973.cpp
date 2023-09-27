#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;

int c[40],a;
int main(){
  for(int i=0;i<41;i++){c[i]=0;}
  while(~scanf("%d",&a)){
    c[a]=1;
  }
  for(int i=1;i<=30;i++){
    if(c[i]==0){
      printf("%d\n",i);
    }
  }
}