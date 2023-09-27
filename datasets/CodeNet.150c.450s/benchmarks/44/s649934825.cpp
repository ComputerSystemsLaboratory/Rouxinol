#include <array>
#include <iostream>
using namespace std;

int main() {
	array<int, 4> a, b;
	while (1) {
		for (auto& A : a) cin >> A;
		for (auto& B : b) cin >> B;
		if (!cin) break;
		
		int hit = 0, blow = 0;
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				if (a[i] == b[j]) {
					if (i == j) {
						hit++;
					}
					else {
						blow++;
					}
					break;
				}
			}
		}
		cout << hit << ' ' << blow << endl;
	}
	return 0;
}