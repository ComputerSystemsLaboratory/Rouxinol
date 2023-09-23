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

char f[150][150];
int h, w;

void dfs(int y, int x) {
  char z = f[y][x];
  f[y][x] = 'C';
  rep(i,0,4) {
    int my = y+dy[i]; int mx = x+dx[i];
    if(0<=my&&my<h && 0<=mx&&mx<w && f[my][mx] == z) dfs(my, mx);
  }
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  while(1) {
    cin >> h >> w;
    if(h ==0 && w == 0) break;
    rep(i,0,h) {
      rep(j,0,w) {
        cin >> f[i][j];
      }
    }

    int ans = 0;
    rep(i,0,h) {
      rep(j,0,w) {
        if(f[i][j] != 'C') {
          dfs(i, j);
          ans++;
        }
      }
    }

    cout << ans << endl;
  }

	return 0;
}