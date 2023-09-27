#include <iostream>
#include <vector>
using namespace std;

int totalizer(vector<int>& data, int& dataLength) {
	int total = 0;
	int max = data[0];
	int min = data[0];

	for (int i = 0; i < dataLength; ++i) {
		total += data[i];

		if (data[i] > max) max = data[i];
		if (data[i] < min) min = data[i];
	}
	total -= (max + min);
	return total / (dataLength - 2);
}

int main() {
	vector<int> v(100);

	int n;
	cin >> n;

	while (n != 0) {
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		cout << totalizer(v, n) << endl;
		cin >> n;
	}

	return 0;
}