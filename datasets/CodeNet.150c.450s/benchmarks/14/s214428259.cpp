#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n;i++) {

		if (i % 3 == 0) {
			cout << " " << i;
		}
		else {
			
			for (int j = 0; j < 4;j++) {

				int n;
				int m;

				n = pow(10, j + 1);
				m = n / 10;

				if (j == 0 && i % n == 3) {
					cout << " " << i;
					break;
				}else if (j != 0 && (i % n) / m == 3) {
					cout << " " << i;
					break;
				}
			}

		}
	}

	cout << endl;

	//cin >> /*変数他*/;
	//cout << /*文字列*/ << endl;
	return 0;
}
