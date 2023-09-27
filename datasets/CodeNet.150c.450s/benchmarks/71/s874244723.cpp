#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int solve(const int n) {
	set< vector<int> > s;
	vector<int> v(4);

	for (v[0] = 0; v[0] < 10; v[0]++)
		for (v[1] = 0; v[1] < 10; v[1]++)
			for (v[2] = 0; v[2] < 10; v[2]++)
				for (v[3] = 0; v[3] < 10; v[3]++) {
					int sum = 0;
					for (int i = 0; i < 4; i++) sum += v[i];
					if (sum == n) {
						s.insert(v);
						break;
					}
				}
	return s.size();
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	while (cin >> n) {
		cout << solve(n) << endl;
	}
	return 0;
}