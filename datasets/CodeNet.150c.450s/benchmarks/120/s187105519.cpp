// AOJ 0525 Osenbei
// 2017.11.12 bal4u
// 2018.3.8 use bitset

//#define _CRT_SECURE_NO_WARNINGS
//#include "bits/stdc++.h"
#include <bits/stdc++.h>
using namespace std;

char buf[20010];

int main()
{
	int r, c, i, j, k, s, lim, cnt, ans;
	char *p;

	while (fgets(p=buf, 20, stdin) && *p != '0') {
		sscanf(p, "%d%d", &r, &c);
		
bitset <10002> b[10];

		for (j = 0; j < r; j++) {
			fgets(p=buf, 20010, stdin);
			for (i = 0; i < c; i++) b[j][i] = *p & 1, p+=2;
		}

bitset <10002> a[10];

		ans = 0; lim = 1 << r;
		for (k = 0; k < lim; k++) {
			for (j = 0; j < r; j++) a[j] = b[j];
			for (j = 0; j < r; j++) if (k & (1<<j)) a[j].flip(); 

			cnt = 0;
			for (i = 0; i < c; i++) {
				s = 0;
				for (j = 0; j < r; j++) s += a[j][i];
				if (s < r-s) s = r-s;
				cnt += s;
			}
			if (cnt > ans) ans = cnt;
		}
		printf("%d\n", ans);
	}
	return 0;
}

