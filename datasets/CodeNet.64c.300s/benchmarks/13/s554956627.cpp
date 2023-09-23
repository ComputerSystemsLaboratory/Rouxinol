#include <iostream>
using namespace std;

long long fib_(int n,long long a,long long b){
  if(n==2) return a+b;
  return fib_(n-1,b,a+b);
}

long long fib(int n){
  if(n==0) return 1;
  if(n==1) return 1;
  return fib_(n,1,1);
}


int main(){
  int n; cin>>n;
  cout<<fib(n)<<endl;
}