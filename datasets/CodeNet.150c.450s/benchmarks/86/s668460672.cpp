#include <iostream>
using namespace std;
int main () {
	int n, m, p;
	while (cin >> n >> m >> p, n || m || p) {
		int gambler = 0;
		int hit;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			gambler += x;
			if (i + 1 == m) hit = x;
		}
		if (hit) {
			int pool = gambler * 100 - gambler * p;
			cout << pool / hit << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}