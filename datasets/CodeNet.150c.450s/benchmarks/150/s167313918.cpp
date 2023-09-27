#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int n,C[10001]={},a;
  cin>>n;
  for(int i=0;i<n;i++)scanf("%d",&a),C[a]++;
  for(int i=0,cnt=0;cnt<n;i++){
    for(int j=0;j<C[i];j++){
      if(cnt)printf(" ");
      printf("%d",i),cnt++;
    }
  }
  printf("\n");
  return 0;
}