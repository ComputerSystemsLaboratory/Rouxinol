#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int dx[2] = { 1, 0 }, dy[2] = { 0, 1 };
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int H, W;
	while(cin >> W >> H, H) {
		bool ng[17][17] = { 0 };
		int n;
		cin >> n;
		while(n--) {
			int x, y;
			cin >> x >> y;
			ng[y][x] = true;
		}

		int dp[17][17] = { 0 };
		dp[1][1] = 1;
		for(int y = 1; y <= H; y++) {
			for(int x = 1; x <= W; x++) {
				for(int k = 0; k < 2; k++) {
					int nx = x + dx[k], ny = y + dy[k];
					if(1 <= nx && nx <= W && 1 <= ny && ny <= H && !ng[ny][nx]) {
						dp[ny][nx] += dp[y][x];
					}
				}
			}
		}

		cout << dp[H][W] << endl;
	}
}