#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll H, W;
ll field[110][110];
ll dx[8] = { 0, 1, 0,-1, 1, 1,-1,-1 };
ll dy[8] = { 1, 0,-1, 0, 1,-1, 1,-1 };
void dfs(ll y, ll x) {
	field[y][x] = 0;
	for (ll i = 0; i < 8; i++) {
		ll ny = y + dy[i];
		ll nx = x + dx[i];
		if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
			if (field[ny][nx] == 1)
				dfs(ny, nx);
		}
	}
}
int main() {
	while (cin >> H >> W) {
		if (H == 0 && W == 0) break;
		ll cnt = 0;
		for (ll i = 0; i < W; i++) {
			for (ll j = 0; j < H; j++) {
				cin >> field[i][j];
			}
		}
		for (ll y = 0; y < W; y++) {
			for (ll x = 0; x < H; x++) {
				if (field[y][x] == 1) {
					dfs(y, x);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}


