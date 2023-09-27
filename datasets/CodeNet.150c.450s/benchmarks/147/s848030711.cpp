#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main()
{
  int n;

  cin >> n;

  vector<int> ans(n);

  int total = 0;

  for (int i = 1; i < sqrt(n); i++)
  {
    for (int j = 1; j < sqrt(n); j++)
    {
      for (int k = 1; k < sqrt(n); k++)
      {
        total = i * i + j * j + k * k + i * j + j * k + i * k;
        if (n >= total)
          ans.at(total-1)++;
      }
    }
  }
  rep(i, n) cout << ans.at(i) << endl;
}
