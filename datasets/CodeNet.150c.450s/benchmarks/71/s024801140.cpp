#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	int n;
	while(cin >> n) {
		int ans = 0;
		for(int a = 0; a <= 9; a ++)
			for(int b = 0; b <= 9; b ++)
				for(int c = 0; c <= 9; c ++)
					for(int d = 0; d <= 9; d ++)
						if(a + b + c + d == n)
							ans ++;
		cout << ans << '\n';
	}
	return 0;
}