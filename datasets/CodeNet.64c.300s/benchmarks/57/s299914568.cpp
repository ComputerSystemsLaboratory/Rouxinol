#include <iostream>
#include <algorithm>
using namespace std;
int H, W, a[11][10009], z[10009];
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	while(cin >> H >> W, H | W) {
		for(int i = 0; i < H; i++) {
			for(int j = 0; j < W; j++) cin >> a[i][j];
		}
		int ret = 0;
		for(int i = 0; i < (1 << H); i++) {
			fill(z, z + W, 0);
			for(int j = 0; j < H; j++) {
				for(int k = 0; k < W; k++) {
					if(i & (1 << j)) z[k] += 1 - a[j][k];
					else z[k] += a[j][k];
				}
			}
			int res = 0;
			for(int j = 0; j < W; j++) {
				res += max(z[j], H - z[j]);
			}
			ret = max(ret, res);
		}
		cout << ret << endl;
	}
}