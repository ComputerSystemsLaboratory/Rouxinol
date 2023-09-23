#include<iostream>
using namespace std;

long long mem[100][21];
int N, V[100];

long long dp(int n, int r)
{
  if(n == N - 1)
  {
    if(r == V[n])
      return 1;
    return 0;
  }
  if(mem[n][r] != -1)
    return mem[n][r];
  long long ans = 0;
  if(r + V[n] <= 20)
    ans += dp(n + 1, r + V[n]);
  if(r - V[n] >= 0)
    ans += dp(n + 1, r - V[n]);
  mem[n][r] = ans;
  return ans;
}

int main()
{
  for(int i = 0; i < 100; i++)
    for(int j = 0; j < 21; j++)
      mem[i][j] = -1;
  cin >> N;
  for(int i = 0; i < N; i++)
    cin >> V[i];
  cout << dp(1, V[0]) << endl;
}