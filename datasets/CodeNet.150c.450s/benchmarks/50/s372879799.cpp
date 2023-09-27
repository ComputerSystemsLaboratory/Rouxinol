#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int main() {
	int n, coin[6] = {500, 100, 50, 10, 5, 1};
	
	while (cin >> n, n) {
		int nn = 1000 - n, ans = 0;
		
		for_(i,0,6) {
			int d = nn / coin[i];
			ans += d;
			nn -= d * coin[i];
		}
		
		cout << ans << endl;
	}
}