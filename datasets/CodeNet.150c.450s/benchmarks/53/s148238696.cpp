#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<int, int>> factor;

	int root_n = sqrt(n);
	int a = n;

	for (int i = 2; i <= a; i++) {
		if (n == 1) break;
		if (i == root_n + 1 && factor.empty()) break;
		int count = 0;
		while (n % i == 0) {
			n /= i;
			count++;
		}
		if (count) factor.push_back(make_pair(i, count));
	}

	cout << a << ":";

	if (factor.empty()) cout << " " << a;

	while (!factor.empty()) {
		pair<int, int> fa;
		fa = *(factor.begin());
		factor.erase(factor.begin());
		for (int i = 0; i < fa.second; i++) {
			cout << " " << fa.first;
		}
	}

	cout << endl;

	return 0;
}

