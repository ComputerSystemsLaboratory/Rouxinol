#include <iostream>
using namespace std;

int main() {
	int n, p;

	while (1) {
		int flag = 0;
		int player[50] = { 0 };
		cin >> n >> p;
		if (n == 0 && p == 0) break;
		int p_max = p;

		while (1) {
			for (int j = 0; j < n; j++) {
				if (p != 0) player[j] += 1, p--;
				else p = player[j], player[j] = 0;
				if (player[j] == p_max) {
					flag = -1;
					cout << j << endl;
					break;
				}
			}
			if (flag == -1) break;
		}
	}
	return 0;
}