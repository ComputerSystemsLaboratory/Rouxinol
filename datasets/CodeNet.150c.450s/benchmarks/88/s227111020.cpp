#include <iostream>

using namespace std;

typedef long long ll;

ll w[100], h[100], n[100];

int main() {
	for (int i = 0; i < 100; i++) {
		n[i] = -1;
	}
	int c = 0;
	while (true) {
		ll H, W;
		cin >> H >> W;
		if (H == 0 && W == 0)break;
		ll t = H*H + W*W;
		for (int i = 1; i <= 150; i++) {
			for (int j = i + 1; j <= 150; j++) {
				ll t2 = i*i + j*j;
				if (t < t2 && (n[c] == -1 || n[c] > t2)) {
					h[c] = i;
					w[c] = j;
					n[c] = t2;
				}
				else if (t == t2 && H < i && n[c] != t2) {
					h[c] = i;
					w[c] = j;
					n[c] = t2;
				}
			}
		}
		c++;
	}
	for (int i = 0; i < c; i++) {
		cout << h[i] << " " << w[i] << endl;
	}
}