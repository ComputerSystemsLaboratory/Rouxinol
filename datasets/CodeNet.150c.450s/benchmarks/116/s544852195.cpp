#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n, k;
	while (cin >> n >> k) {
		if (n == 0 && k == 0) {
			break;
		}
		vector<int> data(n);
		long long int sum = 0;
		long long int MAX;
		for (int i = 0; i < n; i++) {
			cin >> data[i];
			sum += data[i];
			if (i == k-1) {
				MAX = sum;
			} else if (i > k-1) {
				sum -= data[i-k];
				MAX = max(MAX, sum);
			}
		}
		cout << MAX << endl;
	}
	return 0;
}