#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
using namespace std;
#define ll long long

int main() {
	int m, minn, maxn, hoge, ans, maxhoge;
	while (1) {
		cin >> m >> minn >> maxn;
		if (m == 0 && minn == 0 && maxn == 0)break;
		vector<int> p(m);
		for (int i = 0; i < m; i++) {
			cin >> p[i];
		}
		sort(p.begin(), p.end());
		reverse(p.begin(), p.end());
		ans = minn - 1;
		for (int i = minn - 1; i < maxn; i++) {
			if (i == minn - 1) maxhoge = p[i] - p[i + 1];
			hoge = p[i] - p[i + 1];
			if (ans < i && hoge >= maxhoge) {
				ans = i;
				maxhoge = hoge;
			}
		}
		cout << ++ans << endl;

	}
	return 0;
}
