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


int main(void)
{
	int h, w;
	ios::sync_with_stdio(false);
	while(cin >> h >> w && h)
	{
		SArray table(h);
		readAll(table);

		int ans = 0;
		char now = ' ';
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if(table[i][j] == '.') continue;
				ans++;
				queue<P> que;
				que.push(P(i, j));
				now = table[i][j];
				while (!que.empty())
				{
					P p = que.front(); que.pop();
					if(table[p.first][p.second] != now) continue;
					table[p.first][p.second] = '.';
					for (int k = 0; k < 4; k++)
					{
						int nr = dr[k] + p.first, nc = dc[k] + p.second;
						if(!inRange(h, nr) || !inRange(w, nc)) continue;
						que.push(P(nr, nc));
					}
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}