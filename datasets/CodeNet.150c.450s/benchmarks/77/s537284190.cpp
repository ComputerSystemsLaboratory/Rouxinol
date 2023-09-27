#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int, int>P;

bool a[21][21];

int main() {
	int n;
	while (cin >> n, n) {
		memset(a, 0, sizeof(a));
		rep(i, n) {
			int x, y; cin >> x >> y;
			a[x][y] = true;
		}
		int m; cin >> m;
		int x = 10, y = 10;
		if (a[x][y]) {
			a[x][y] = false;
			n--;
		}
		rep(i, m) {
			char c;int d; cin >> c >> d;
			if (c == 'N')rep(j, d) {
				y++;if (a[x][y]) { a[x][y] = false; n--; }
			}
			if (c == 'E')rep(j, d) {
				x++; if (a[x][y]) { a[x][y] = false; n--; }
			}
			if (c == 'S')rep(j, d) {
				y--; if (a[x][y]) { a[x][y] = false; n--; }
			}
			if (c == 'W')rep(j, d) {
				x--; if (a[x][y]) { a[x][y] = false; n--; }
			}
		}
		puts(n ? "No" : "Yes");
	}
}