#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

#define rep(i, n)	for(int i = 0; i < (int)(n); i++)
#define ull unsigned long long

struct Data {
	int x, y, n;
};

int w, h;
int c[51][51];
stack<Data> st;

void land_dfs(int x, int y, int n) {
	

	c[x][y] = n;

	// 島の発見中
	// 周囲8マスに島チェック

	for (int yy = -1; yy <= 1; yy++) {
		for (int xx = -1; xx <= 1; xx++) {
			if (x + xx < 0 || x + xx >(w - 1)) continue;
			if (y + yy < 0 || y + yy >(h - 1)) continue;
			if (c[x + xx][y + yy] != 1) continue;

				st.push({ x + xx, y + yy, n });

		}
	}

}

int main() {

	while (true) {
		cin >> w >> h;
		if (w == 0 &&  h == 0) break;

		int count = 0;

		for (int y = 0; y < h; y++) {
			for (int x = 0; x < w; x++) {
				cin >> c[x][y];
			}
		}

		for (int y = 0; y < h; y++) {
			for (int x = 0; x < w; x++) {
				if (c[x][y] == 1) {
					count++;
					st.push({ x, y, count + 1 });


					while (!st.empty()) {
						const auto d = st.top();
						st.pop();
						land_dfs(d.x, d.y, d.n);
					}
				}
			}
		}

		cout << count << endl;
	}


	return 0;
}
