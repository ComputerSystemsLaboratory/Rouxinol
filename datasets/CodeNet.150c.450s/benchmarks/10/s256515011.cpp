#include <bits/stdc++.h>  

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef pair<char, int> P;

int house[4][3][10];

int main() {
	int N;
	scanf("%d", &N);
	rep(i, N) {
		int b, f, r, v;
		scanf("%d %d %d %d", &b, &f, &r, &v);
		--b; --f; --r;
		house[b][f][r] += v;
	}
	rep(i, 4) {
		rep(j, 3) {
			rep(k, 10) {
				if(k == 9) printf("%2d\n", house[i][j][k]);
				else printf("%2d", house[i][j][k]);
			}
		}
		if(i != 3) printf("####################\n");
	}
	return 0;
}