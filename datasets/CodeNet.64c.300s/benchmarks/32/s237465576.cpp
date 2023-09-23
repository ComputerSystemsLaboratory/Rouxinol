#include<iostream>
#include<limits>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int min = numeric_limits<int>::max();
	int max = numeric_limits<int>::min();
	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		if (temp < min) {
			min = temp;
		}
		if (temp > max) {
			max = temp;
		}
		sum += temp;
	}
	
	cout << min << " " << max << " " << sum << endl;

	return 0;
}