#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
	int n,sum=0;
	vector<int> v;
	for (;;) {
		cin >> n;
		if (n == 0)break;
		v.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for (int i = 1; i < n - 1; i++) {
			sum += v[i];
		}

		cout << sum / (n - 2) << endl;
		sum = 0;
		
	}
}