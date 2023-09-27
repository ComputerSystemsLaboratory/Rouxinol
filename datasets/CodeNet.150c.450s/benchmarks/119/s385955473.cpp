#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0 ; i < n ; ++i)

using namespace std;

#ifdef _DEBUG
#define debug_io fstream cin("input.txt");ofstream cout("output.txt");
#else
#define debug_io ;
#endif

int main()
{
	debug_io
	int w, h;
	while (cin >> w >> h, w + h) {
		int tile[55][55];
		REP(i, h) {
			REP(j, w) {
				cin >> tile[i][j];
			}
		}

		int dx[8] = { 0,0,1,-1,1,1,-1,-1 };
		int dy[8] = { 1,-1,0,0,1,-1,1,-1 };

		int ans = 0;
		REP(i, h) {
			REP(j, w) {
				if (tile[i][j] == 1) {
					vector<pair<int, int>> bfs;
					bfs.push_back({ i,j });

					while (bfs.size()) {
						auto now = bfs.front();
						bfs.erase(bfs.begin());
						int x = now.second;
						int y = now.first;
						if (tile[y][x] == 2) {
							continue;
						}
						tile[y][x] = 2;
						REP(k, 8) {
							int nx = max(0,min(x + dx[k],w-1));
							int ny = max(0, min(y + dy[k], h - 1));
							if (tile[ny][nx] == 1) {
								bfs.push_back({ ny,nx });
							}
						}
					}
					ans++;
					
				}
			}
		}
		cout << ans << endl;
	}
}