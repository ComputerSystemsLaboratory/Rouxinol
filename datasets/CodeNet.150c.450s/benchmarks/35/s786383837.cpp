#include <iostream>

#define SIZE 5001

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}

		int list[SIZE], max = -114514;
		list[0] = 0;
		for (int i = 0; i < n; i++) {
			cin >> list[i + 1];

			if (list[i + 1] > max) {
				max = list[i + 1];
			}
			list[i + 1] += list[i];
		}

		for (int i = 2; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				if (list[j] - list[j - i] > max) {
					max = list[j] - list[j - i];
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}