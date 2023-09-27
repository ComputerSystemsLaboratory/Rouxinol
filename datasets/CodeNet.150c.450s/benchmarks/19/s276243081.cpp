#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	for(int i = 1; ; i++) {
		int x, y;
		cin >> x >> y;

		if(x == 0 && y == 0) break;
		cout << min(x, y) << " " << max(x, y) << "\n";

	}

	return 0;
}