#include<stdio.h>
#include<iostream>

using namespace std;
int main(void){
  int a,b,res;
  int i=0;

  while(cin>>a>>b){
    i=0;
    res=a+b;

    while(res>0){
      res=res/10;
      i++;
    }

    printf("%d\n",i);
  }

  return 0;
}