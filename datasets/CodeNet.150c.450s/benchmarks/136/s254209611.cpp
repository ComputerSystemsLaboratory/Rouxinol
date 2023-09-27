#include<iostream>
using namespace std;

int gcd(int a,int b){
  if(b==0) return a;
  return gcd(b,a%b);
}

int main(){
  int a,b;
  while(cin>>a>>b){
    if(a<b) swap(a,b);
    int d=gcd(a,b);
    cout<<d<<" "<<a/d*b<<endl;
  }
  return 0;
}