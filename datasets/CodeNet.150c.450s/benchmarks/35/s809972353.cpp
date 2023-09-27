#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a, i, j, k, n;
	long long max, sum;
	vector<int> s;
	while (cin >> n) {
		if (n == 0)break;
		s.clear();
		max = -100000;
		for (i = 0; i < n; i++) {
			cin >> a;
			s.push_back(a);
		}
		for (j = 0; j < n; j++) {
			sum = 0;
			for (k = j; k < n; k++) {
				sum += s[k];
				if (sum > max)max = sum;
			}
		}
		cout << max << endl;
	}
	return 0;
}