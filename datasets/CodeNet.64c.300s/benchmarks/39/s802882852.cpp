#include <iostream>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		int count = 0;
		
		if (n <= 36) {
			for (int a = 0;a <= 9;a++) {
				for (int b = 0;b <= 9;b++) {
					for (int c = 0;c <= 9;c++) {
						for (int d = 0;d <= 9;d++) {
							if (a + b + c + d == n) {
								count++;
							}
						}
					}
				}
			}
		}
		
		cout << count << endl;
	}
	return 0;
}