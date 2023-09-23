#include <iostream>

using namespace std;
typedef long long ll;
/*
  AOJ power
  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B&lang=jp
  繰り返し2乗法
*/

ll power(int m,int n)
{
  if(n==0) return 1;
  if(n&1) return m*power(m,n-1) % ll(1e9+7);
  ll k=power(m,n/2);
  return k*k % ll(1e9+7);
}
int main()
{
  int n,m;
  cin>>m>>n;
  cout<<power(m,n)<<"\n";
}

