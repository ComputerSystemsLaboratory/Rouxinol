# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <tuple>
# include <functional>
# include <utility>
# define INF 1000000000
# define MOD 1000000000+7
using namespace std;

int H, W;
char fruit[200][200];
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };

void dfs(int h, int w, char c) {
	fruit[h][w] = '.';
	for (int i = 0; i < 4; i++) {
		if (h + dx[i] >= 0 && h + dx[i] <= H && w + dy[i] >= 0 && w + dy[i] <= W && fruit[h + dx[i]][w + dy[i]] == c) {
			dfs(h + dx[i], w + dy[i], c);
		}
	}
}
int main() {
	while (cin >> H >> W&&H != 0 && W != 0) {
		string a;
		for (int i = 0; i < H; i++) {
			cin >> a;
			for (int j = 0; j < W; j++) {
				fruit[i][j] = a[j];
			}
		}
		int ans = 0;
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (fruit[i][j] == '#')dfs(i, j, '#'), ans++;
				if (fruit[i][j] == '*')dfs(i, j, '*'), ans++;
				if (fruit[i][j] == '@')dfs(i, j, '@'), ans++;
			}
		}
		cout << ans << endl;
	}
}