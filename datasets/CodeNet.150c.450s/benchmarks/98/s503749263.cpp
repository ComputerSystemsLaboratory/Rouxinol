#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m, sn, sm, sub;
	bool flag;
	while (cin >> n >> m, n || m) {
		vector<int> taro(n), hanako(m);
		sn = sm = 0;
		for (int i = 0; i < n; i++) {
			cin >> taro[i];
			sn += taro[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> hanako[i];
			sm += hanako[i];
		}
		sort(taro.begin(), taro.end());
		sort(hanako.begin(), hanako.end());
		if ((sn - sm) % 2) {
			cout << -1 << endl;
			continue;
		}
		sub = (sn - sm) / 2;
		flag = true;
		for (int i = 0; i < n; i++) {
			if (binary_search(hanako.begin(), hanako.end(), (taro[i] - sub))) {
				cout << taro[i] << " " << taro[i] - sub << endl;
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << -1 << endl;
		}
	}
	return 0;
}