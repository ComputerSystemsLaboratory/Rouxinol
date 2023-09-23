#include <iostream>
#include <algorithm>
using namespace std;

int c = 0, ans = 0;

int main() {

	while (true) {
		int x, y, s;
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0)break;

		int s2 = s * 100 / (100 + x);
		for (int i = 1; i < s2;i++) {
			for (int j = 1; j < s2;j++) {
				if((int)(i*(100 + x) / 100)+(int)(j*(100 + x) / 100) == s){
					c = max(c, i + j);
					int a = i*(100 + y) / 100;
					int b = j*(100 + y) / 100;
					ans = max(ans, a + b);
				}
			}
		}
		cout << ans << endl;
		c = 0;
		ans = 0;
	}
}