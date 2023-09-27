#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define endl "\n"

const int timeLimit = 1980;

i64 xor128()
{
  static i64 x = 123456789, y = 362436069, z = 521288629, w = 88675123;
  i64 t = (x ^ (x << 11));
  x = y;
  y = z;
  z = w;
  return (w = (w ^ (w >> 19)) ^ (t ^ (t >> 8)));
}

i64 D;
i64 c[26];
i64 s[365][26];
vector<i64> ans;

i64 eval(vector<i64> &ans)
{
  i64 score = 0;
  i64 last[26] = {};
  for (i64 i = 0; i < D; i++)
  {
    score += s[i][ans[i]];
    last[ans[i]] = i + 1;
    for (i64 j = 0; j < 26; j++)
      score -= c[j] * (i + 1 - last[j]);
    cout << score << endl;
  }
  return score;
}

void solve()
{
  chrono::system_clock::time_point start = chrono::system_clock::now();
  chrono::system_clock::time_point end = start + chrono::milliseconds(timeLimit);
  i64 bestScore = 0, loop = 0;
  while (chrono::system_clock::now() < end)
  {
    i64 t[3] = {xor128() % D, xor128() % 26};
    t[2] = ans[t[0]];
    ans[t[0]] = t[1];
    i64 score = eval(ans);
    if (bestScore < score)
    {
      bestScore = score;
    }
    else
    {
      ans[t[0]] = t[2];
    }
    loop++;
  }
  cerr << "score: " << bestScore + (i64)(1e6) << endl
       << "loop: " << loop << endl;
}

void input()
{
  cin >> D;
  for (i64 i = 0; i < 26; i++)
    cin >> c[i];
  for (i64 i = 0; i < D; i++)
    for (i64 j = 0; j < 26; j++)
      cin >> s[i][j];
  ans.resize(D);
}

void output()
{
  for (i64 i = 0; i < D; i++)
    cout << ans[i] + 1 << endl;
}

int main()
{
  // input();
  // solve();
  // output();
  cin >> D;
  for (i64 i = 0; i < 26; i++)
    cin >> c[i];
  for (i64 i = 0; i < D; i++)
    for (i64 j = 0; j < 26; j++)
      cin >> s[i][j];
  ans.resize(D);
  for (i64 i = 0; i < D; i++)
  {
    cin >> ans[i];
    ans[i]--;
  }
  eval(ans);
  return 0;
}
