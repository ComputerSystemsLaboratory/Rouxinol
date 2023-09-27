// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long llong;
using namespace std;



int main() {
	int ans = 0;
	int n, x;

	while (1) {
		cin >> n >> x;
		if (n == 0 && x == 0)break;
		ans = 0;
		for (int i = 1; i <= n - 2; i++) {
			for (int j = i + 1; j <= n - 1; j++) {
				for (int k = j + 1; k <= n; k++) {
					if (i + j + k == x)ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

