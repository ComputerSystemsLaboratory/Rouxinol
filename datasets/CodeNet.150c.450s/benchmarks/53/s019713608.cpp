#include <bits/stdc++.h>
#define INF 10000000000
using namespace std;

pair<int, int> division(int n, int denominator)
{
  int cnt = 0;
  while (n % denominator == 0)
  {
    n /= denominator;
    cnt += 1;
  }
  return {n, cnt};
}

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> ans;
  int test_n = n;
  for (int i = 2; i * i <= n; ++i)
  {
    if (test_n % i == 0)
    {
      pair<int, int> n_cnt = division(test_n, i);
      test_n = n_cnt.first;
      ans.push_back({i, n_cnt.second});
    }
  }
  if (test_n != 1)
  {
    ans.push_back({test_n, 1});
  }
  cout << n << ":";
  for (int i = 0; i < ans.size(); ++i)
  {
    for (int j = 0; j < ans.at(i).second; ++j)
    {
      cout << " " << ans.at(i).first;
    }
  }
  cout << endl;
}

