#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <string>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cstring>
#include <tuple>
#include <utility>
#include <list>
#include <cmath>
#include <unordered_map>

using namespace std;

typedef long long LL;
typedef vector<int> Array;
typedef pair<int, int> P;

const int INF = 1 << 29;
const LL MOD = 100000;
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define all(c) (c).begin(), (c).end()

struct edge{ int to, cost; edge(int t, int c) :to(t), cost(c){} };

int main()
{
	//while (cin >> n)
	stringstream ss;
	//ss << "result" << i + 1 << ".txt";
	//FILE* fp_out = freopen(ss.str().c_str(), "w", stdout);

	int h, w, n;
	while (cin >> h >> w >> n && h)
	{
		vector<vector<char>> stage(h, vector<char>(w));
		vector<P> cheese(n + 1);
		rep(i, h) rep(j, w)
		{
			char c; cin >> c;
			stage[i][j] = c;
			if (c == 'S') cheese[0] = P(i, j);
			if (1 <= c - '0' && c - '0' <= 9) cheese[c - '0'] = P(i, j);
		}

		int ans = 0;
		vector<int> dr = { -1, 0, 1, 0 };
		vector<int> dc = { 0, 1, 0, -1 };
		rep(i, n)
		{
			P from = cheese[i], to = cheese[i + 1];
			typedef pair<P, int> PI;
			queue<PI> que;
			vector<vector<bool>> visited(h, vector<bool>(w));
			que.emplace(from, 0);
			while (!que.empty())
			{
				PI pi = que.front(); que.pop();
				P p = pi.first; int len = pi.second;

				if (p == to)
				{
					ans += len;
					break;
				}

				rep(k, 4)
				{
					int nr = dr[k] + p.first, nc = dc[k] + p.second;
					if (nr < 0 || nr >= h || nc < 0 || nc >= w ||
						stage[nr][nc] == 'X' || visited[nr][nc]) continue;

					visited[nr][nc] = true;
					que.emplace(P(nr, nc), len + 1);
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}