#include <bits/stdc++.h>
using namespace std;

int n,s;

int mySet(int d,int sum,int c){
  int count=0;
  if(d==n){
    if(sum==s){
      return 1;
    }else{
      return 0;
    }
  }
  for(int i=c;i<=9;i++){
    count+=mySet(d+1,sum+i,i+1);
  }
  return count;
}

int main(void){
  while(cin>>n>>s,n){
    cout<<mySet(0,0,0)<<endl;
  }
  return 0;
}