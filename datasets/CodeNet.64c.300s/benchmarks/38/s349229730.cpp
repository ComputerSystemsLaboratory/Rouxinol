#include <iostream>
using namespace std;

int main() {
	int n;
	for (cin >> n; n; --n) {
		int a = 0;
		int b = 0;
		bool result = true;
		for (int i = 0; i < 10; ++i) {
			int ball;
			cin >> ball;
			if (ball > a) {
				a = ball;
			}
			else if (ball > b) {
				b = ball;	
			}
			else if (result) {
				result = !result;
			}
		}
		cout << (result ? "YES" : "NO") << endl;
	}
	return 0;
}