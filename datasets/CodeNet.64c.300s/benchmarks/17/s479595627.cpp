#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	int x, y;
	int s;
	int cnt = 1;
	int val1, val2;
	while (true) {
		int max = 0;
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0) break;

		for (int i = 1; i < 1000; i++) {
			for (int j = 1; j < 1000; j++) {
				val1 = i*(100 + x) / 100;
				val2 = j*(100 + x) / 100;
				if (val1 + val2 == s) {
					val1 = i*(100 + y) / 100;
					val2 = j*(100 + y) / 100;
					if (max < val1 + val2) max = val1 + val2;
				}
			}
		}
		cout << max << endl;
	}

	return 0;
}