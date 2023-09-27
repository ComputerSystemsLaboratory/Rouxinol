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
int c[101][101];
bool used[101][101];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void dfs(int x, int y, int cc){
		used[x][y] = true;
		for(int i = 0; i < 4; i++){
				int nx = x + dx[i];
				int ny = y + dy[i];
				if(nx >= 0 && nx < h && ny >= 0 && ny < w){
						if(c[nx][ny] == cc && !used[nx][ny])dfs(nx, ny, cc);
				}
		}
}

int main(int argc, char const* argv[])
{
	while(true){
			cin >> h >> w;
			if(h == 0)break;
			for(int i = 0; i < h; i++){
					string s;
					cin >> s;
					for(int j = 0; j < w; j++){
							if(s[j] == '#')c[i][j] = 0;
							else if(s[j] == '*')c[i][j] = 1;
							else c[i][j] = 2;
							used[i][j] = false;
					}
			}
			int res = 0;
			for(int i = 0; i < h; i++){
					for(int j = 0; j < w; j++){
							if(used[i][j])continue;
							res++;
							dfs(i, j, c[i][j]);
					}
			}
			cout << res << endl;
	}
	return 0;
}

