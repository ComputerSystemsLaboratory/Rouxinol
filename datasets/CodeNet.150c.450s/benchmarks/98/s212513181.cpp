#include<iostream>
#include<algorithm>
using namespace std;

static const int MAX = 1 << 20;

int main() {
	int i, j, n, m, diff, anstaro, anshanako, taro[101], hanako[101];
	
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0)break;
		anstaro = MAX;
		anshanako = MAX;
		diff = 0;
		for (i = 0; i < n; i++) {
			cin >> taro[i];
			diff += taro[i];
		}
		for (j = 0; j < m; j++) {
			cin >> hanako[j];
			diff -= hanako[j];
		}
		//cout << "	" << diff << endl;
		if (diff % 2 == 1) {
			cout << -1 << endl;
			continue;
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if ((taro[i] - hanako[j]) * 2 == diff) {
					if (taro[i] + hanako[j] < anstaro + anshanako) {
						anstaro = taro[i];
						anshanako = hanako[j];
					}
				}
			}
		}
		if (anstaro != MAX && anshanako != MAX) {
			cout << anstaro << " " << anshanako << endl;
		} else {
			cout << -1 << endl;
		}
		
	}




	return 0;
}