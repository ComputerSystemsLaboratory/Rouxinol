#include <iostream>
using namespace std;
int main () {
	int n, a, b, c, x;
	while (cin >> n >> a >> b >> c >> x, n || a || b || c || x) {
		int y[n];
		for (int i = 0; i < n; i++) {
			cin >> y[i];
		}
		int frame = 0;
		for (int i = (y[0] == x); i < n; i++) {
			do {
				x = (a * x + b) % c;
				frame++;
				if (frame == 10001) {
					cout << -1 << endl;
					goto NEXT;
				}
			} while (x != y[i]);
		}
		cout << frame << endl;
NEXT: continue;
	}
	return 0;
}