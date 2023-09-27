#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n; scanf("%d", &n);
	int cnt = 0;
	rep(i, n) {
		int a; scanf("%d", &a);
		if (a == 1)continue;
		bool ok = true;
		for (int j = 2; j*j <= a; j++) {
			if (a%j == 0) { ok = false; break; }
		}
		if (ok)cnt++;
	}
	printf("%d\n", cnt);
}