#include<stdio.h>
#include<stdlib.h>
#include<map>
using namespace std;

bool flg[30];
int main(){
  int i,n;
  for(i=0;i<28;i++){
    scanf("%d",&n);
    n--;
    flg[n]=true;
  }
  for(i=0;i<30;i++){
    if(!flg[i])
      printf("%d\n",i+1);
  }
  return 0;
}