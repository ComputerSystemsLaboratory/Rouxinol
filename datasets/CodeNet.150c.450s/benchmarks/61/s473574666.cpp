#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;

int n, a, b, c, x, y[110];

int main() {
	while (cin >> n >> a >> b >> c >> x, n) {
		rep (i, n) cin >> y[i];
		int cnt = 0, index = 0;
		while (cnt < 10001) {
			if (x == y[index]) index++;
			if (index == n) {
				cout << cnt << endl;
				goto end;
			}
			x = (a * x + b) % c;
			cnt ++;
		}
		cout << -1 << endl;
end:;
	}
	return 0;
}
