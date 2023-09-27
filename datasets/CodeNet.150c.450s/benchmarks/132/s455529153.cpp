#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, p;
	while ( cin >> n >> p, n || p ) {
		vector<int> v(n, 0);
		int rest = p;
		int pos = 0;
		int ans = 0;
		int t = 0;
		while (++t < 1000001) {
			if (rest > 0) --rest, ++v[pos];
			else rest = v[pos], v[pos] = 0;

 			if (rest == 0 && v[pos] == p) {
				ans = pos;
				break;
			}
			pos = (pos + 1) % n;
		}
		cout << ans << endl;
	}
}