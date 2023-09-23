#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int x, y, s;
	while (cin >> x >> y >> s, x, y, s) {
		int ans = -1;
		for (double i = 1; i < s; i++) 
			for (double j = 1; j < s; j++) 
				if ((int)(i*(100 + x) / 100) + (int)(j*(100 + x) / 100) == s)ans = max(ans, (int)(i*(100 + y) / 100) + (int)(j*(100 + y) / 100));
		cout << ans << endl;
	}
}