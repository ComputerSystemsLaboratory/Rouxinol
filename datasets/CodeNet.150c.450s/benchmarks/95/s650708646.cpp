#include <iostream>
#include <string>

using namespace std;

int main() {
	int stage = 0;
	int n;
	string a;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int counter = 0;
		int before = 0;
		stage = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (stage == 0) {
				if (a == "lu") {
					stage = 1;
				} else {
					stage = 2;
				}
				before = 0;
			} else if (stage == 1) {
				if (a == "ru") {
					stage = 3;
					if (before == 0) {
						counter++;
					}
				} else {
					stage = 0;
					if (before == 3) {
						counter++;
					}
				}
			} else if (stage == 2) {
				if (a == "lu") {
					stage = 3;
					if (before == 0) {
						counter++;
					}
				} else {
					stage = 0;
					if (before == 3) {
						counter++;
					}
				}
			} else {
				if (a == "ld") {
					stage = 2;
				} else {
					stage = 1;
				}
				before = 3;
			}
		}
		cout << counter << endl;
	}
	return 0;
}