#include<iostream>
#define N 1000000007
using namespace std;
typedef long long ll;

int mod_pow(int m,int n){
  ll a=1,x=m;
  for(int i=0;i<30;i++){
    if(n&(1LL<<i))a=a*x%N;
    x=x*x%N;
  }
  return a;
}

int main(){
  int m,n;
  cin>>m>>n;
  cout<<mod_pow(m,n)<<endl;
  return 0;
}