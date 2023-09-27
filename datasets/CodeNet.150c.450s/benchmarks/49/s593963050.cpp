#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	while (cin >> n && n != 0) {
		vector<int> s(n);
		for (int i = 0; i < n; ++i) cin >> s[i];

		sort(s.begin(), s.end());
		int ave = 0;
		for (int i = 1; i < n - 1; ++i) ave += s[i];
		ave /= (n - 2);
		cout << ave << endl;
	}
	return 0;
}
