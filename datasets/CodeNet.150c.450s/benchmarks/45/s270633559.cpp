#include <bits/stdc++.h>
using namespace std;
const int64_t MOD = 1000000007;

int64_t pow_mod(int64_t M, int64_t N)
{
  int64_t POW[100];
  POW[0] = 1;
  POW[1] = M;
  for (int i = 2; i < 100; i++)
    POW[i] = (POW[i - 1] * POW[i - 1]) % MOD;
  int64_t bit = N, k = 1, m = 1;
  while (N > 0)
  {
    int a = N % 2;
    if (a)
      m = (m * POW[k]) % MOD;
    k++;
    N /= 2;
  }
  return m;
}

int main()
{
  int64_t M, N;
  cin >> M >> N;
  cout << pow_mod(M, N) << endl;
}
