#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int ans = 0;
vector<vector<int>> board;

void input(int H)
{
  board.clear();
  board.resize(5, vector<int>(10, 0));
  for (int row = H - 1; row >= 0; row--)
  {
    rep(col, 5)
    {
      cin >> board.at(col).at(row);
    }
  }
}

pair<int, int> find(int row)
{
  int start = -1, last = -1, cnt = 0;
  rep(col, 5)
  {
    if (board.at(col).at(row) == 0)
    {
      start = -1;
      last = -1;
      cnt = 0;
      continue;
    }
    if (board.at(col).at(row) == last)
    {
      cnt++;
    }
    else
    {
      if (cnt >= 3)
      {
        break;
      }
      start = col;
      last = board.at(col).at(row);
      cnt = 1;
    }
  }
  return make_pair(start, cnt);
}

void change(pair<int, int> p, int row)
{
  int start, cnt;
  tie(start, cnt) = p;
  if (start == -1 || cnt < 3)
  {
    return;
  }
  ans += board.at(start).at(row) * cnt;
  for (int col = start; col < start + cnt; col++)
  {
    board.at(col).at(row) = -1;
  }
}

void update()
{
  rep(col, 5)
  {
    vector<int> new_col(10, 0);
    int index = 0;
    rep(i, 10)
    {
      if (board.at(col).at(i) == -1)
      {
        continue;
      }
      if (board.at(col).at(i) == 0)
      {
        break;
      }
      new_col.at(index) = board.at(col).at(i);
      index++;
    }
    board.at(col) = new_col;
  }
}

void solve()
{
  ans = 0;
  rep(i, 10)
  {
    rep(row, 10)
    {
      change(find(row), row);
    }
    update();
  }
  cout << ans << endl;
}

int main()
{
  while (1)
  {
    int H;
    cin >> H;
    if (!H)
      break;
    input(H);
    solve();
  }
}
