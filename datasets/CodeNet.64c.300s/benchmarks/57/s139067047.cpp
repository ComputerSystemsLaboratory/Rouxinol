#include<iostream>
#include<algorithm>
using namespace std;
int r, c, ans;
bool osenbei[15][10010];
void Zen_Re_Kkyo(int p) {
	if (p == r) {
		int sum = 0;
		for (int i = 0; i < c; i++) {
			int a = 0, b = 0;
			for (int j = 0; j < r; j++) {
				if (osenbei[j][i])a++;
				else b++;
			}
			sum += max(a, b);
		}ans = max(sum, ans);
		return;
	}
	Zen_Re_Kkyo(p + 1);
	for (int i = 0; i < c; i++)osenbei[p][i] = !osenbei[p][i];
	Zen_Re_Kkyo(p + 1);
	for (int i = 0; i < c; i++)osenbei[p][i] = !osenbei[p][i];
	return;
}
int main() {
	while (cin >> r >> c, r, c) {
		ans = 0;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> osenbei[i][j];
			}
		}
		Zen_Re_Kkyo(0);
		cout << ans << endl;
	}
}
