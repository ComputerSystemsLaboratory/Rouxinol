#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int n, a[5000], s, r;

int main() {
	while (true) {
		scanf("%d",&n);
		if (n==0) break;
		r = -1001001001;
		rep(i,n) scanf("%d",&a[i]);
		rep(i,n) {
			s = 0;
			for (int j = i; j < n; ++j) {
				s += a[j];
				r = max(r, s);
			}
		}
		printf("%d\n",r);
	}
}
