#include<iostream>
#include<stdio.h>
using namespace std;

bool include_3(int);

int main(){
  int n,i;

  cin>>n;

  for(i=1;i<=n;i++){
    if(i%3==0||include_3(i)){
      cout<<" "<<i;
    }
  }

  cout<<endl;

  return 0;
}

bool include_3(int n){
  while(n){
    if(n%10==3){
      return 1;
    }
    n=n/10;
  }
  return 0;
}