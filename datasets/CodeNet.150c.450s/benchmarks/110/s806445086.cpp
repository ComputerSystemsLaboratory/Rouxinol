/**
 * File    : JOI_2010_cheese.cpp
 * Author  : Kazune Takahashi
 * Created : 2018-3-8 21:40:42
 * Powered by Visual Studio Code
 */

#include <iostream>
#include <iomanip>   // << fixed << setprecision(xxx)
#include <algorithm> // do { } while ( next_permutation(A, A+xxx) ) ;
#include <vector>
#include <string> // to_string(nnn) // substr(m, n) // stoi(nnn)
#include <complex>
#include <tuple>
#include <queue>
#include <stack>
#include <map> // if (M.find(key) != M.end()) { }
#include <set>
#include <random> // random_device rd; mt19937 mt(rd());
#include <cctype>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we need debug.

typedef long long ll;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

// const int C = 1e6+10;
const int infty = 1000000007;

typedef tuple<int, int> point;

int H, W, N;
string S[1010];
int d[1010][1010];
point P[20];
queue<point> Q[20];

bool valid(int x, int y)
{
  return (0 <= x && x < H && 0 <= y && y < W && S[x][y] != 'X');
}

int main()
{
  cin >> H >> W >> N;
  for (auto i = 0; i < H; i++)
  {
    cin >> S[i];
  }
  for (auto i = 0; i < H; i++)
  {
    for (auto j = 0; j < W; j++)
    {
      if (S[i][j] == 'S')
      {
        P[0] = point(i, j);
      }
      int t = S[i][j] - '0';
      if (1 <= t && t <= 9)
      {
        P[t] = point(i, j);
      }
    }
  }
  int ans = 0;
  for (auto i = 0; i < N; i++)
  {
    fill(&d[0][0], &d[0][0] + 1010 * 1010, infty);
    d[get<0>(P[i])][get<1>(P[i])] = 0;
    Q[i].push(P[i]);
    while (!Q[i].empty())
    {
      point p = Q[i].front();
      Q[i].pop();
      if (p == P[i+1])
      {
        ans += d[get<0>(p)][get<1>(p)];
#if DEBUG == 1
        cerr << "d[" << get<0>(p) << "][" << get<1>(p)
             << "] = " << d[get<0>(p)][get<1>(p)] << endl;
#endif
        break;
      }
      for (auto k = 0; k < 4; k++)
      {
        int nx = get<0>(p) + dx[k];
        int ny = get<1>(p) + dy[k];
        if (valid(nx, ny) && d[nx][ny] == infty)
        {
          d[nx][ny] = d[get<0>(p)][get<1>(p)] + 1;
          Q[i].push(point(nx, ny));
        }
      }
    }
  }
  cout << ans << endl;
}
