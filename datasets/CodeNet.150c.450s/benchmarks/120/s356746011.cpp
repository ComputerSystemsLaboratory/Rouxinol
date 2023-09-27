#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int h, w;
vector<vector<bool>> senbei;

vector < vector<bool>> rev(int a) {
	auto tmp = senbei;
	int ct = 0;
	for (int i = 1; i < (1 << h); i = i << 1) {
		ct++;
		if (a & i) {
			for (int j = 0; j < w; j++) {
				tmp[ct - 1][j] = !tmp[ct - 1][j];
			}
		}
	}
	return tmp;
}

int main() {
	while (cin >> h >> w, h * w) {
		senbei.resize(h);
		for (int i = 0; i < h; i++) {
			senbei[i].resize(w);
			for (int j = 0; j < w; j++) {
				int tmp;
				cin >> tmp;
				senbei[i][j] = static_cast<bool>(tmp);
			}
		}
		int ans = 0;
		for (int i = 0; i < (1 << h); i++) {
			auto tmp = rev(i);
			int ct = 0;
			for (int i = 0; i < w; i++) {
				int c = 0;
				for (int j = 0; j < h; j++) {
					if (tmp[j][i])c++;
				}
				c = max(c, h - c);
				ct += c;
			}
			ans = max(ct, ans);
		}
		cout << ans << endl;
		senbei.clear();
	}
	return 0;
}