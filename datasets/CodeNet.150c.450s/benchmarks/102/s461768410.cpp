#include<iostream>
#include<cstring>
typedef long long ll;
typedef long double ld;
using namespace std;
ll dx[] = {1, -1, 0, 0};
ll dy[] = { 0,0,1,-1 };
ll W, H;
ll cnt;
char field[100][100];
void dfs(ll y, ll x) {
	field[y][x] = '#';
	for (ll k = 0; k < 4; k++) {
		ll ny = y + dy[k];
		ll nx = x + dx[k];
		if (ny >= 0 && ny <H && nx >= 0 && nx < W) {
			if (field[ny][nx] == '.')
			{
				cnt++;
				dfs(ny, nx);
			}
		}
	}
	return;
}
int main() {
	while (cin >> W >> H) {
		if (W == 0 && H == 0) { break; }
		cnt = 1;
		for (ll i = 0; i < H; i++) {
			cin >> field[i];
		}
		for (ll i = 0; i < H; i++) {
			for (ll j = 0; j < W; j++) {
				if (field[i][j] == '@') {
					dfs(i, j);
				}
			}
		}
		cout << cnt << endl;
	}
}
