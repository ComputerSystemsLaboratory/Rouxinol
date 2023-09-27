#include<iostream>
using namespace std;
int main() {
	int n, a, b, c, x;
	while (cin >> n >> a >> b >> c >> x) {
		if (!n && !a && !b && !c && !x)return 0;
		int y[114514];
		for (int i = 0; i < n; i++) cin >> y[i];
		int i, cnt = 0;
		for (i = 0; i < 10010; i++) {
			if (x == y[cnt]) { cnt++; if (cnt == n)break; }
			x = (a*x + b) % c;
		}
		if (i > 10000)cout << "-1\n";
		else cout << i << endl;
	}
}