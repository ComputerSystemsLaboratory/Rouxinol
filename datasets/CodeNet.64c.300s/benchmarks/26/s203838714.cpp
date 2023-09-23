//NTL_1B
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
typedef unsigned long long ull;

ull mod_pow(ull x,ull n,ull mod){
 ull res=1LL;
 while(n>0){
  if(n%2==1) res=res*x%mod;
  x=x*x%mod;
  n/=2;
 }
 return res;
}

int main(){
 ull m,n;
 cin>>m>>n;
 cout<<mod_pow(m,n,1000000007)<<endl;
 return 0;
}