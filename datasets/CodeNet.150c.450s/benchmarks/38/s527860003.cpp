#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n, m[3];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m[0] >> m[1] >> m[2];
		sort(m, m + 3);
		if(pow(m[0], 2) + pow(m[1], 2) == pow(m[2], 2))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}