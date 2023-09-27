/*
** 
*/

# include <cstdio>
# include <iostream>
using namespace std;

const int maxn = 100000 + 10;
typedef long long LL;

int n, k;
LL w[maxn];

int getP(LL p) {
	int i = 0;
	for (int j = 0; j < k; j++) {
		LL s = 0;
		while (s + w[i] <= p) {
			s += w[i];
			i++;
			if (i == n) return n;
		}
	}
	return i;
}
 
int main() {
	// freopen("infile", "r", stdin);
	// freopen("outfile", "w", stdout);
	
	while (scanf("%d%d", &n, &k) != EOF) {
		for (int i = 0; i < n; i++)
			scanf("%I64d", &w[i]);
		LL left = 0;
		LL right = 100000 * 10000;
		LL mid;
		while (right - left > 1) {
			mid = (left + right) / 2;
			if (getP(mid) >= n)
				right = mid;
			else
				left = mid;
		}
		cout << right << endl;
	}
	return 0;
}
