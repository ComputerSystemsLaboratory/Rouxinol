#include <iostream>

using namespace std;

bool isallzero(int n[], int m, int num) {
	for (int i = 0; i < num; i++) {
		if (i == m) {
			continue;
		} else if (n[i] != 0) {
			return false;
		}
	}

	return true;
}

int main() {
	while (true) {
		int n, p;
		cin >> n >> p;
		if (n == 0) {
			break;
		}
		
		int bowl = p;
		int candidates[n];
		int current = 0;
		for (int i = 0; i < n; i++) {
			candidates[i] = 0;
		}

		while (true) {
			if (bowl > 0) {
				bowl--;
				candidates[current]++;
				if (bowl == 0 && isallzero(candidates, current, n)) {
					cout << current << endl;
					break;
				}
			} else {
				bowl = candidates[current];
				candidates[current] = 0;
			}
			current = (current + 1) % n;
		}
	}
	
	return 0;
}