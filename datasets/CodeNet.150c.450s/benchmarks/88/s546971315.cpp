#include <iostream>
#include <cmath>

using namespace std;

int h, w;

// h1, w1が小さいか判定
bool mini(int h1, int w1, int h2, int w2) {
	int hw1 = h1 * h1 + w1 * w1;
	int hw2 = h2 * h2 + w2 * w2;
	if (hw1 < hw2) return true;
	if (hw1 == hw2 && h1 < h2) return true;
	return false;
}

void solve() {
	int resh = 150, resw = 150;
	
	for (int ah = 1; ah <= 150; ah++) {
		for (int aw = ah + 1; aw <= 150; aw++) {
			if (mini(h, w, ah, aw)) {
				if (mini(ah, aw, resh, resw)) {
					resh = ah;
					resw = aw;
				}
			}
		}
	}
	
	cout << resh << " " << resw << endl;
}

int main() {
	while (cin >> h >> w, h) {
		solve();
	}
	
	return 0;
}