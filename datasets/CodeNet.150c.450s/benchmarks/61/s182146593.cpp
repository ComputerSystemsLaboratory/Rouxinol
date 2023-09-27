#include <iostream>
using namespace std;

int n, a, b, c, x;
int y[100];

int main() {
	int i;
	
	while (true) {
		cin >> n >> a >> b >> c >> x;
		if (!n) break;
		for (i = 0; i < n; i++) cin >> y[i];
		
		int r = x;
		int cor = 0;
		
		for (i = 0; i <= 10000; i++) {
			if (r == y[cor]) {
				cor++;
			}
			if (cor == n) {
				break;
			}
			r = (r * a + b) % c;
		}
		
		if (cor < n) { cout << -1 << endl; }
		else { cout << i << endl; }
	}
	return 0;
}