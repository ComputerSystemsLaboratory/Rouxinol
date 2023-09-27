#include<iostream>
#include<vector>
#include<limits>
#include<numeric>

using namespace std;

int main() {

	int n;
	while (cin >> n, n != 0) {
		vector<int> data(n);
		for (int& temp : data) {
			cin >> temp;
		}

		int sum_max = numeric_limits<int>::min();
		for (int i = 0; i < n; ++i) {
			int sum = 0;
			auto it2 = i;
			for (int j = i; j < n; ++j) {
				sum = sum + data[j];

				if (sum_max < sum) {
					sum_max = sum;
				}
			}
		}
		cout << sum_max << endl;
	}

	return 0;
}