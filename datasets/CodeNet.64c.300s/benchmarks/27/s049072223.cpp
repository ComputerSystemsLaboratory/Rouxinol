#include <bits/stdc++.h>  

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; -i)
#define INF (1 << 30)
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int main() {
	int a, b;
	while(scanf("%d %d", &a, &b), a || b) {
		int ans = 0;
		for(int i = 1; i < a + 1; ++i) {
			for(int j = i + 1; j < a + 1; ++j) {
				for(int k = j + 1; k < a + 1; ++k) {
					if(i + j + k == b) ++ans;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}