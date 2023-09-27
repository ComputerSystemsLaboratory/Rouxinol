#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PI;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 0;
	for (int i = a; i <= b; i++) {
		if (c % i == 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
