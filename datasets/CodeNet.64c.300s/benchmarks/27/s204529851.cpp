#include "iostream"
using namespace std;

int main() {
	bool flag = true;
	int n, x, count = 0;

	while (flag == true) {
		cin >> n >> x;
		if (n == 0 && x == 0) flag = false;
		else {
			for (int a = 1; a <= n - 2; a++) {
				for (int b = a + 1; b <= n - 1;b++) {
					for (int c = b + 1; c <= n;c++) {
						if (a + b + c == x) count++;
					}
				}
			}
			cout << count << endl;
			count = 0;
		}
	}

}