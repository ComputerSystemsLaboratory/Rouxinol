#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	while (cin >> n && n) {
		vector<string> f(n);
		for (int i = 0; i < n; ++i) cin >> f[i];
		int cnt = 0;
		for (int i = 1; i < n; ++i)
			if (f[i - 1][1] == f[i][1]) cnt++, i++;
		cout << cnt << endl;
	}

	return 0;
}
