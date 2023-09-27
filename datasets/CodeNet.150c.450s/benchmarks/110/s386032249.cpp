#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <functional>
#include <numeric>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <queue>
#include <stack>
#include <set>

using namespace std;

#define ALL(co) co.begin(), co.end()
#define tpl(...) make_tuple(__VA_ARGS__)

typedef long long LL;
typedef pair<int, int> P; typedef pair<P, int> PI; typedef pair<P, P> PP;
typedef vector<int> Array; typedef vector<vector<int> > Array2;
typedef vector<LL> LArray; typedef vector<P> PArray; typedef vector<string> SArray;

const int INF = 1 << 29;
const LL LINF = 1LL << 60;

inline int getInt() { int itiv; return (cin >> itiv, itiv); }
template <typename T> void readAll(vector<T>& vec) { for (int i = 0, size = vec.size(); i < size; i++) cin >> vec[i]; }
template <typename T, typename U> void readAll(vector<pair<T, U> >& vec) { for (int i = 0, size = vec.size(); i < size; i++) cin >> vec[i].first >> vec[i].second; }
template < typename T > inline string toString( const T &a ){ ostringstream oss; oss << a; return oss.str(); };
inline bool between(int min, int max, int n) { return min <= n && n <= max; }
inline bool inRange(int begin, int end, int n) { return begin <= n && n < end; }
inline bool inRange(int size, int n) { return 0 <= n && n < size; }

int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, -1, 0, 1 };
int dr[] = { 0, -1, 0, 1 }, dc[] = { -1, 0, 1, 0 };

int h, w, n;

int main(void)
{
	ios::sync_with_stdio(false);
	while(cin >> h >> w >> n && n)
	{
		vector<vector<char> > stage(h, vector<char>(w));
		PArray goals(n + 1);
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> stage[i][j];
				if(stage[i][j] == 'S') goals[0] = P(i, j);
				int num = stage[i][j] - '0';
				if(inRange(n + 1, num)) goals[num] = P(i, j);
			}
		}

		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			P start = goals[i], goal = goals[i + 1];
			vector<vector<bool> > visited(h, vector<bool>(w));
			queue<PI> que;
			que.push(PI(start, 0));
			while (!que.empty())
			{
				PI pi = que.front(); que.pop();
				if(goal == pi.first)
				{
					ans += pi.second;
					break;
				}
				int r = pi.first.first, c = pi.first.second;
				if(visited[r][c]) continue;
				visited[r][c] = true;

				for (int i = 0; i < 4; i++)
				{
					int nr = r + dr[i], nc = c + dc[i];
					if(!inRange(h, nr) || !inRange(w, nc) || stage[nr][nc] == 'X') continue;
					que.push(PI(P(nr, nc), pi.second + 1));
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}