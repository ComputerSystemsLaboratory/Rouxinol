#include <iostream>

using namespace std;

int main() {
	int n;
	while(1) {
		cin >> n;
		if (!n) break;
		int maxsum = -1000000;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			sum += a;
			if (sum > maxsum) maxsum = sum;
			if (sum < 0) sum = 0;
		}
		cout << maxsum << endl;
	}
	return 0;
}