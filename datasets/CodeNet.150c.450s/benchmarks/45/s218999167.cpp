#include<iostream>
using namespace std;

long long pow(long long m,long long n,long long N)
{
  if(n==0)return 1;
  long long res=pow(m*m%N,n/2,N);
  if(n%2==1) res=(res*m)%N;
  return res;
}

int main()
{
  int m,n;
  cin>>m>>n;
  cout<<pow(m,n,1000000007)<<endl;
  return 0;
}