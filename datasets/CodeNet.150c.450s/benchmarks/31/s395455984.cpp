#include <iostream>
#include <algorithm>

#define MAX_R 1000000000

using namespace std;

int main() {
	int n, a, R = 0, ans = -MAX_R;
	cin >> n;
	cin >> R;
	for (int i = 1; i < n; i++) {
		cin >> a;
		ans = max(a - R, ans);
		if (R > a)
			R = a;
	}
	cout << ans << endl;
	return 0;
}