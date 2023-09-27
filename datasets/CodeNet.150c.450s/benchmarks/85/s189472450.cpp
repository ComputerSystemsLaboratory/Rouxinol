#include <bits/stdc++.h>
using namespace std;
const int INF = (1 << 29);

struct Matrix
{
  int r, c;
};

vector<Matrix> M;

int rec(vector<vector<int>> &dp, int top, int bottom)
{
  if (dp.at(top).at(bottom) != INF)
  {
    return dp.at(top).at(bottom);
  }
  if (top == bottom)
  {
    dp.at(top).at(bottom) = 0;
    return 0;
  }
  for (int mid = top; mid < bottom; mid++)
  {
    dp.at(top).at(bottom) = min(dp.at(top).at(bottom), rec(dp, top, mid) + rec(dp, mid + 1, bottom) + M.at(top).r * M.at(mid).c * M.at(bottom).c);
  }
  return dp.at(top).at(bottom);
}

int main()
{
  int n;
  cin >> n;
  M.resize(n);
  for (int i = 0; i < n; i++)
  {
    int r, c;
    cin >> r >> c;
    M.at(i) = Matrix{r, c};
  }
  vector<vector<int>> dp(n + 1, vector<int>(n + 1, INF));
  cout << rec(dp, 0, n - 1) << endl;
}
