#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	int n, s;
	while (cin >> n >> s, n) {
		int cnt = 0;
		for (int i = (1 << n) - 1; i < 1 << 10; i++) {
			int use = 0, sum = 0;
			for (int j = 0; i >> j; j++) {
				if ((i >> j) & 1) { use++; sum += j; }
			}
			if (use == n&&sum == s)cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}