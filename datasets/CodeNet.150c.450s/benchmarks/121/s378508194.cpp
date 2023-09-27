#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int h, w;
char x[100][101];
bool u[100][100];

void dfs(int a, int b){
	u[a][b] = true;
	int dx[4] = {0, 0, 1, -1};
	int dy[4] = {-1, 1, 0, 0};
	rep(i, 4){
		int c = a + dx[i];
		int d = b + dy[i];
		if(0 <= c && c < h && 0 <= d && d < w && !u[c][d] && x[c][d] == x[a][b]){
			dfs(c, d);
		}
	}
}

int main(){
	while(scanf("%d%d", &h, &w), h){
		rep(i, h){
			scanf("%s", x[i]);
			fill_n(u[i], w, false);
		}
		int ans = 0;
		rep(i, h){
			rep(j, w){
				if(!u[i][j]){
					++ans;
					dfs(i, j);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}