#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int num = 0;
		if (n > 36) {
			cout << "0" << endl;
		}
		else {
			for (int i = 0; i < 10; i++) {
				if (i > n) {
					break;
				}
				for (int j = 0; j < 10; j++) {
					if (i + j > n) {
						break;
					}
					for (int k = 0; k < 10; k++) {
						if (i + j + k > n) {
							break;
						}
						for (int l = 0; l < 10; l++) {
							if (i + j + k + l > n) {
								break;
							}
							if (i + j + k + l == n) {
								num++;
							}
						}
					}
				}
			}
			cout << num << endl;
		}
	}
	return 0;
}
