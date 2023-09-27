#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, s, n) for (int i = (s); i < (n); i++)
#define all(co) begin(co), end(co)

int main() {
	int h, w;
while (cin >> h >> w && h) {
	int l = h * h + w * w;
	using t = tuple<int, int, int>;
	t ans = t(1<<29,-1,-1);
	REP(i, 1, 151) REP(j, i+1, 151) {
		int dl = (i * i + j * j);
        if(dl == l && i > h && get<0>(ans) > dl) ans = t(dl, i, j);
		if(dl > l && get<0>(ans) > dl) ans = t(dl, i, j);
	}
	cout << get<1>(ans) << " " << get<2>(ans)<< endl;
}
}