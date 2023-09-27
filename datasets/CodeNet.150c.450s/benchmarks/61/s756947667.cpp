#include<iostream>
using namespace std;

int main() {
	int n, a, b, c, x;
	while (cin >> n >> a >> b >> c >> x, n) {
		int time = 0;
		for (int i = 0; i < n; ++i) {
			int y; cin >> y;
			while (time <= 10001 && x != y) {
				x = (a*x + b) % c; time++;
			}
			x = (a*x + b) % c; time++;
		}
		if (time-1 > 10000)cout << "-1" << endl;
		else cout << time-1 << endl;
	}
}