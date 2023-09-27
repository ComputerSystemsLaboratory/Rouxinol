#include<iostream>
#include<cstdio>
#include<cstdlib>
//#include<>                                                                                
using namespace std;

#define MOD 1000000007

long long pow_rem(long long m,long long n)
{
  if(n==1)return m;
  long long v;
  v=pow_rem(m,n/2)%MOD;
  if(n%2==0)
    return (v*v)%MOD;
  else return ((v*v)%MOD*m)%MOD;
}
int main(){
  long long n,m,ans=1;
  cin >>m>>n;
  cout<<pow_rem(m,n)<<endl;
  return 0;
}