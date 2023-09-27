#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, input;
	long long sum = 0;
	int max, min;
	vector<int> v;
	cin >> n;
	/*
	for (auto i : v) {
		cin >> input;
		v.push_back(input);
		sum += v[i];
	}
	*/
	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
		sum += input;
	}
	sort(v.begin(), v.end());
	min = v[0];
	max = v[n-1];
	cout << v[0] << " " << v[n-1] << " " << sum << endl;
	return 0;
}