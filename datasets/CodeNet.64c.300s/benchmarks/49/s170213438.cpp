#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int a,b;
  int an[1000];
  int con[1000];
  int i=0,j,k;

  while(cin>>a>>b){
    an[i] =a + b;
    con[i] = 1;
    while(an[i]>=10){
      an[i] /= 10;
      con[i]++;
    }
    i++;
      }
  for(j=0;j<i;j++){
    cout<<con[j]<<endl;
  }

  return 0;

}
    