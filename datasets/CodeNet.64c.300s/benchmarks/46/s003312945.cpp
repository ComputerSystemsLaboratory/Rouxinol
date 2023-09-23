#include<iostream>

using namespace std;

bool isPrime(int n){
  for(int i=2;i*i<=n;++i)
    if(n%i==0) return false;
  return n!=1;
}

int main(){
  int a,d,n;

  while(cin>>a>>d>>n,a,d,n){
    int cnt=0;
    if(isPrime(a)==true)
      cnt++;
    while(cnt<n){
      a+=d;
      if(isPrime(a)==true)
	cnt++;
    }
    cout<<a<<endl;
  }
}