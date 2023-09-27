#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#define inf 32767
using namespace std;

int main(){
  int sum,max=0,point;
  int i,l;
  
  for(i=0;i<2;i++){
    sum=0;
    for(l=0;l<4;l++){
      cin>>point;
      sum+=point;
    }
    if(sum>max) max=sum;
  }
  printf("%d\n",max);
  return 0;
}