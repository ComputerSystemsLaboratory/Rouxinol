#include<cstdio>
#include<iostream>
using namespace std;
#define ll long long 
ll fac(ll n);
int main(){
  ll n;
  cin >> n;
  cout << fac( n ) << endl;
}
ll fac(ll n){
  if(n == 1)return 1;
  return n * fac(n-1);
}