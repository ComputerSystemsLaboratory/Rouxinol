#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main() {
	long long int n;
	long long int k;
	while (cin >> n >> k && n != 0 && k != 0) {
		vector<long long int> v;
		v.push_back(0);

		for (long long int i = 1; i <= n; ++i) {
			long long int m;
			cin >> m;
			v.push_back(m);
			v[i] += v[i - 1];
		}

		long long int sum = 0;
		for (long long int i = 1; i + k <= n; ++i) {
			sum = max(sum, v[i + k] - v[i]);
		}

		cout << sum << endl;
	}
	
	return 0;
}