#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

#define check abs(vec[i] - vec[i + 1])

int main() {
	int n, num_abs; vector<int> vec;
	while (1) {
		cin >> n; if (n == 0) break;
		num_abs = INT_MAX; vec.resize(n);
		for (int i = 0; i < n; i++) cin >> vec[i];
		sort(vec.begin(), vec.end());
		for (int i = 0; i < n - 1; i++){
			if (check < num_abs) num_abs = check;
			if (check == 0) { num_abs = check; break; }
		}
		cout << num_abs << endl;
		for (int i = 0; i < n; i++) vec.pop_back();
	}
	return 0;
}
