#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef queue< pair<int, int> > qpii;
typedef vector<int> vi;
typedef vector<int, int> vii;
typedef vector<string> vs;
typedef vector< pair<int, int> > vpii;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

char f[1001][1001];
int h,w,n;
int d[1001][1001];

int bfs(pii s) {
  qpii q;
  rep(i,0,h)
    rep(j,0,w)
      d[i][j] = INF;
  q.push(s);
  d[s.first][s.second] = 0;

  int num = 0, hp = 1;
  while(q.size()) {
    pii p = q.front();
    q.pop();

    if(atoi(&f[p.first][p.second]) == hp) {
      num += d[p.first][p.second];
      if(hp == n) break;
      while(q.size()) q.pop();
      rep(i,0,h)
        rep(j,0,w)
          d[i][j] = INF;
      d[p.first][p.second] = 0;
      hp++;
    }

    rep(i,0,4) {
      int my = p.first + dy[i];
      int mx = p.second + dx[i];
      if(0<=my&&my<h && 0<=mx&&mx<w && f[my][mx] != 'X' && d[my][mx] == INF) {
        q.push(pii(my, mx));
        d[my][mx] = d[p.first][p.second] + 1;
      }
    }
  }
  return num;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  cin >> h >> w >> n;
  pii s;
  rep(i,0,h)
    rep(j,0,w) {
      cin >> f[i][j];
      if(f[i][j] == 'S') {
        s.first = i;
        s.second = j;
      }
    }

  cout << bfs(s) << endl;

	return 0;
}