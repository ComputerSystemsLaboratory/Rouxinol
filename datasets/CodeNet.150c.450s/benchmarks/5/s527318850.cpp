#include <bits/stdc++.h>

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

vector<int> num;

int main() {
	int n;
	scanf("%d", &n);
	rep(i, n) {
		int a;
		scanf("%d", &a);
		num.push_back(a);
	}
	repr(i, n - 1) {
		(i != 0) ? printf("%d ",num[i]) : printf("%d\n", num[i]);
	}
	return 0;
}