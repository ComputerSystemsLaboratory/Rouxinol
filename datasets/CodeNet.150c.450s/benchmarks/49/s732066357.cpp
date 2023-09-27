#include <bits/stdc++.h>  

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define FORr(i, j, k) for(int i = j; i >= k; --i)
#define repr(i, j) FOR(i, j, 0)
#define INF (1 << 30)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> Pi;

const int MOD = 1e9 + 7;
const int dy[]={0, 0, 1, -1};
const int dx[]={1, -1, 0, 0};

template <class T> void chmin(T& a, const T& b) { a = min(a, b); }
template <class T> void chmax(T& a, const T& b) { a = max(a, b); }

int main() {
	int N;
	while(scanf("%d", &N), N) {
		int res = 0;
		int maxi = -1, mini = INF;
		int a;
		rep(i, N) {
			scanf("%d", &a);
			res += a;
			maxi = max(maxi, a);
			mini = min(mini, a);
		}
		res = res - (maxi + mini);
		double ans = (double)res / (N - 2) * 10;
		res = (int)(ans / 10);
		printf("%d\n", res);
	}
	return 0;
}