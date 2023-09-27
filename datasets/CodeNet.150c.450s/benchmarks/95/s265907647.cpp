#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int n;
	cin >> n;

	while (n != 0) {
		int count_step = 0;
		int mode = 0;
		for (int i = 0; i < n; i++) {
			char c;
			cin >> c;
			cin >> c;
			if (c == 'u') {
				if (mode != 1) {
					mode = 1;
				}else {
					count_step++;
				}
			}
			if (c == 'd') {
				if (mode != 2) {
					mode = 2;
				}else {
					count_step++;
				}
			}
		}
		cout << count_step << endl;
		cin >> n;
	}
	return 0;
}