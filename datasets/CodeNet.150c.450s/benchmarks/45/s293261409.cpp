#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

long long ans(long long N, long long M)
{
  if(M == 1)
    return N % MOD;

  if(M % 2)
  {
     //return N % MOD * ans(N, M-1) % MOD;
    return N % MOD * (ans(N, (M-1)/2)%MOD * ans(N, (M-1)/2)%MOD) % MOD;
    //const long long a = ans(N, (M-1)/2)%MOD;
    //return N%MOD * a * a % MOD;
       
  }
  else 
  {
      const long long a = ans(N, M/2);
      return a*a%MOD;
  }
    
}

int main()
{

  long long N, M;
  cin >> N >> M;

  cout << ans(N, M) << endl;
  
  return 0;
}
