#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <array>
#include <deque>
#include <algorithm>
#include <utility>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <numeric>
#include <assert.h>
#include <bitset>

#define MOD 1000000007
#define INF 11234567890
#define in std::cin
#define out std::cout
#define rep(i,N) for(LL i=0;i<N;++i)
typedef long long int LL;
typedef std::pair<LL, LL> P;
struct edge { LL to, cost; };

LL H, W, N;
std::string field[1123];
LL Sx, Sy, xy[11];
LL ans;

LL d[1123456];
std::vector<edge>G[1123456];
void dijkstra(LL s)
{
	std::priority_queue<P, std::vector<P>, std::greater<P>>que;
	std::fill(d, d + H * W + 1, INF);
	d[s] = 0;
	que.push(P(0, s));
	while (!que.empty())
	{
		P p = que.top(); que.pop();
		LL v = p.second;
		if (d[v] < p.first) { continue; }
		rep(i, G[v].size())
		{
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost)
			{
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}
}

int main()
{
	try {
		in >> H >> W >> N;
		rep(i, H) { in >> field[i]; }

		rep(h, H)
		{
			rep(w, W)
			{
				if (field[h][w] == 'X') { continue; }
				else if (field[h][w] == 'S') { Sx = h; Sy = w; }
				else if (field[h][w] != '.') { xy[field[h][w] - '0'] = h*W + w; }
				if (h < H - 1)
				{
					if (field[h + 1][w] != 'X')
					{
						G[h*W + w].push_back({ (h + 1)*W + w,1 });
						G[(h + 1)*W + w].push_back({ h*W + w,1 });
					}
				}
				if (w < W - 1)
				{
					if (field[h][w + 1] != 'X')
					{
						G[h*W + w].push_back({ h*W + (w + 1),1 });
						G[h*W + (w + 1)].push_back({ h*W + w,1 });
					}
				}
			}
		}
		dijkstra(Sx*W + Sy);
		rep(i, N)
		{
			ans += d[xy[i + 1]];
			dijkstra(xy[i + 1]);
		}

		out << ans << std::endl;
		return 0;
	}
	catch (std::bad_alloc) { return 0; }
	catch (...) { return 0; }
}