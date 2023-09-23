#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const double PI = acos(-1.0);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		bool flag = false;
		if(i % 3 == 0) {
			flag = true;
		}
		int j = i;
		while(1) {
			int r = j % 10;
			j /= 10;
			if(r == 3) {
				flag = true;
				break;
			}
			if(j == 0) break;
		}
		if(flag) cout << " " << i;
	}
	
	cout << "\n";
	
	return 0;
}