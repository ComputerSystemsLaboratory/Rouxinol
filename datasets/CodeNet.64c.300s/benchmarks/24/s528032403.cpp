#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		int sa = 0,sb = 0;
		while (n--) {
			int a,b;
			cin >> a >> b;
			if (a > b) {
				sa += a + b;
			} else if (a < b) {
				sb += a + b;
			} else {
				sa += a;
				sb += b;
			}
		}
		cout << sa << " " << sb << endl;
	}
}