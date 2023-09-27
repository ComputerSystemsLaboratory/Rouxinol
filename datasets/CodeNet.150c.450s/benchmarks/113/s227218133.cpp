#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){

  int num,i;
  i = 1;
  
  while(cin >> num){
    if(num == 0) break;
    printf("Case %d: %d\n",i,num);
    i++;
  }
  return 0;
}