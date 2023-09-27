#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	for(int n, s; cin >> n >> s; ) if(n || s) {
		int p[10];
		iota(p, p + 10, 0);
		int ans = 0;
		do {
			if(accumulate(p, p + n, 0) == s)
				ans ++;
		}while(next_permutation(p, p + 10));
		for(int i = 1; i <= 10 - n; i ++)
			ans /= i;
		for(int i = 1; i <= n; i ++)
			ans /= i;
		cout << ans << '\n';
	}
	return 0;
}