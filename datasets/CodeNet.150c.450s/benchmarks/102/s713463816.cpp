#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <iomanip>

#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue

using namespace std;
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
const int inf = 1e9;
const ll linf = 1LL << 50;

int h, w;
int sx, sy;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
bool used[21][21];
int color[21][21];

void dfs(int x, int y){
		for(int i = 0; i < 4; i++){
				int nx = x + dx[i];
				int ny = y + dy[i];
				if(nx >= 0 && nx < h && ny >= 0 && ny < w && !used[nx][ny] && color[nx][ny] == 1){
						used[nx][ny] = true;
						dfs(nx, ny);
				}
		}
}

int main(int argc, char const* argv[])
{
	while(true){
			cin >> w >> h;
			if(w == 0)break;
			for(int i = 0; i < h; i++){
					string s;
					cin >> s;
					for(int j = 0; j < w; j++){
							if(s[j] == '.' || s[j] == '@')color[i][j] = 1;
							else color[i][j] = -1;
							if(s[j] == '@'){
									sx = i; sy = j;
							}
							used[i][j] = false;
					}
			}
			dfs(sx, sy);
			int res = 0;
			used[sx][sy] = true;
			for(int i = 0; i < h; i++){
					for(int j = 0; j < w; j++){
							if(used[i][j] == 1)res++;
					}
			}
			cout << res << endl;
	}
	return 0;
}

