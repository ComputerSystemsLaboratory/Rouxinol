#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int h;
int b[10][5];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(cin >> h, h) {
		memset(b, 0, sizeof b);
		for(int y = 0; y < h; y++) {
			for(int x = 0; x < 5; x++) {
				cin >> b[y][x];
			}
		}

		int ans = 0;
		bool flag = true;
		while(flag) {
			flag = false;
			for(int y = 0; y < h; y++) {
				for(int len = 5; len >= 3; len--) {
					for(int s = 0; s + len <= 5; s++) {
						if(b[y][s] == 0) continue;
						bool same = true;
						for(int x = s; x < s + len - 1; x++) {
							same &= b[y][x] == b[y][x + 1];
						}
						if(same) {
							flag = true;
							ans += b[y][s] * len;
							for(int x = s; x < s + len; x++) {
								b[y][x] = 0;
							}
						}
					}
				}
			}

			for(int y = h - 1; y >= 1; y--) {
				for(int x = 0; x < 5; x++) {
					if(b[y][x] == 0) {
						int ny = y;
						while(ny >= 0 && b[ny][x] == 0) ny--;
						if(ny >= 0) {
							swap(b[ny][x], b[y][x]);
						}
					}
				}
			}
		}
		cout << ans << endl;
	}

}