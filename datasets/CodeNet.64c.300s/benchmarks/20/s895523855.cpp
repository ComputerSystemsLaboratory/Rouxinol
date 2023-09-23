#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	for(int d; cin >> d; ) {
		int ans = 0;
		for(int i = 0; i < 600; i += d)
			ans += d * i * i;
		cout << ans << '\n';	
	}
	return 0;
}