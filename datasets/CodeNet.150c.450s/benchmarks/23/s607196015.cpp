#include<iostream>
#include<cstdio>

using namespace std;

int m[45];
void function(int n){
  m[0]=1;
  m[1]=1;
  for(int i=2;i<=n;i++){
    m[i]=m[i-1]+m[i-2];
  }
}

int main(){
  int n;
  cin>>n;
  function(n);
  cout<<m[n]<<endl;
  return 0;
}