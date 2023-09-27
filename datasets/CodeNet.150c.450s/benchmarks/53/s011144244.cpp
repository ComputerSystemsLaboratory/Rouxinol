#include <bits/stdc++.h>
using namespace std;

vector<pair<int64_t, int64_t>> prime_factorize(int64_t N)
{
  vector<pair<int64_t, int64_t>> res;
  for (int64_t a = 2; a * a <= N; a++)
  {
    if (N % a != 0)
      continue;
    int64_t ex = 0;
    while (N % a == 0)
    {
      ex++;
      N /= a;
    }
    res.push_back({a, ex});
  }
  if (N != 1)
    res.push_back({N, 1});
  return res;
}

int main()
{
  int64_t N;
  cin >> N;
  auto res = prime_factorize(N);
  cout << N << ":";
  for (pair<int64_t, int64_t> p : res)
  {
    for (int i = 0; i < p.second; ++i)
      cout << " " << p.first;
  }
  cout << endl;
}
