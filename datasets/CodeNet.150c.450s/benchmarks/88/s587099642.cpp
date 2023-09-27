#include <iostream>
using namespace std;

typedef pair<int, int> R;

int main() {
	int w, h;
	while (cin >> h >> w, h || w) {
		R rect(h * h + w * w, h);
		R res(150 * 150 * 2, 150);
		R resR(150, 150);
		for (int i = 1; i <= 150; i++) {
			for (int j = i + 1; j <= 150; j++) {
				R p(i * i + j * j, i);
				if (rect < p && p < res) {
					res = p;
					resR = make_pair(i, j);
				}
			}
		}
		cout << resR.first << ' ' << resR.second << endl;
	}
	return 0;
}