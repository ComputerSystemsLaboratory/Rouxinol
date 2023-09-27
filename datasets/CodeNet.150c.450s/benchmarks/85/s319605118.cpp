#include <bits/stdc++.h>
using namespace std;

// m[i][j]はM_i...M_jの最小コスト
vector<vector<int> > m(101, vector<int>(101));
// M_iはP[i-1]xP[i]行列
vector<int> P(101);

int n;

void solve()
{
  // M_iの最小コストをメモ
  for (int i = 1; i <= n; i++)
  {
    m.at(i).at(i) = 0;
  }
  for (int l = 2; l <= n; l++)
  {
    // 長さlの行列積の最小コストをメモ
    for (int i = 1; i <= n - l + 1; i++)
    {
      int j = i + l - 1;
      // M_i...M_jの最小コストを、M_i...M_kの最小コストとM_k...M_jの最小コストを参照して計算する
      m.at(i).at(j) = (1 << 21); // 2の21乗
      for (int k = i; k <= j - 1; k++)
      {
        m.at(i).at(j) = min(m.at(i).at(j), m.at(i).at(k) + m.at(k + 1).at(j) + P.at(i - 1) * P.at(k) * P.at(j));
      }
    }
  }
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int r, c;
    if (i == 0)
    {
      cin >> r >> c;
      P.at(0) = r;
      P.at(1) = c;
    }
    else
    {
      cin >> r >> c;
      P.at(i + 1) = c;
    }
  }

  solve();

  cout << m.at(1).at(n) << endl;
}
