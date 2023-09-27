#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int total;
	int ave;

	while (1) {
		int tmp;
		vector<int> v;
		cin >> n;
		if (n == 0)break;

		for (int i = 0; i<n; i++) {
			cin >> tmp;
			v.push_back(tmp);
		}

		sort(v.begin(), v.end());

		total = 0;
		for (int i = 0; i<n; i++) {
			total += v[i];
		}

		total = total - (v[0] + v[n - 1]);
		ave = total / (n - 2);

		cout << ave << endl;

		
	}
}