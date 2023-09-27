#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int cnt = 0;
	int a, b;

	while (cin >> a >> b,a) {
		for (int i = 1;i <= a - 2;i++) {
			for (int j = i + 1;j <= a - 1;j++) {
				for (int k = j + 1; k <= a;k++) {
					if (i + j + k == b)
						cnt++;
				}
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}


	return 0;
}