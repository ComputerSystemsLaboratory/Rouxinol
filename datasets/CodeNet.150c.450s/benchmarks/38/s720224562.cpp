#include <iostream>

#define MAX 3

using namespace std;

int main() {
	int list[MAX], n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> list[0] >> list[1] >> list[2];
		for (int j = 0; j < MAX; j++) {
			list[j] *= list[j];
		}

		bool judge = false;
		for (int j = 0; j < MAX; j++) {
			if (list[j] == list[(j+1)%3] + list[(j+2)%3]) {
				judge = true;
				break;
			}
		}

		if (judge) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

		cout << endl;
	}

	return 0;
}