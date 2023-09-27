#include<iostream>

using namespace std;

int main() {

	int A[4], B[4];

	while (true) {
		for (int& a : A) {
			cin >> a;
		}
		for (int& b : B) {
			cin >> b;
		}
		if (cin.eof()) {
			break;
		}
		int hitCount = 0;
		int blowCount = 0;
		for (int i = 0; i < 4; ++i) {
			if (A[i] == B[i]) {
				++hitCount;
			}
			else {
				for (int j = 0; j < 4; ++j) {
					if (A[i] == B[j]) {
						++blowCount;
					}
				}
			}
		}
		cout << hitCount << ' ' << blowCount << endl;
	}
	return 0;
}