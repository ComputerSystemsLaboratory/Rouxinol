#include <iostream>
using namespace std;

int main() {
	while(1) {
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		int taro[101], hanako[101];
		int taroTotal = 0, hanakoTotal = 0;
		
		for (int i = 0; i < n; i++) {
			cin >> taro[i];
			taroTotal += taro[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> hanako[i];
			hanakoTotal += hanako[i];
		}
		
		int a = 0x7ffffff, b = 0x7ffffff;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (taroTotal - taro[i] + hanako[j] == hanakoTotal - hanako[j] + taro[i])
				if (taro[i] + hanako[j] < a + b) {
					a = taro[i];
					b = hanako[j];
				}
			}
		}
		if (a == 0x7ffffff && b == 0x7ffffff) cout << -1 << endl;
		else cout << a << " " << b << endl;
	}
	return 0;
}