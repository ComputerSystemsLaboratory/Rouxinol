#include<iostream>
using namespace std;
int gcd(int,int);

int main(){
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b)<<endl;
  return 0;
}

int gcd(int a,int b){
  if(!b)return a;
  return gcd(b,a%b);
}