#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	while (true) {
		int a, b,count=0;
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		for (int i = a ; i > 1; i--) {
			for (int j = a-1 ; j >1; j--) {
				if (j >= i) continue;
				for (int k = 1; k < a - 1; k++) {
					if (k >= j)continue;
					if (i + j + k == b) {
						if (i != j&&j != k&&k != i) {
							count++;
						}
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}