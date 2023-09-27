#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <functional>
#include <array>
#include <map>
#include <queue>
#include <limits.h>
#include <set>
#include <stack>
#include <random>
#include <complex>
#define rep(i,s,n) for(int i = (s); (n) > i; i++)
#define REP(i,n) rep(i,0,n)
#define RANGE(x,a,b) ((a) <= (x) && (x) <= (b))
#define DUPLE(a,b,c,d) (RANGE(a,c,d) || RANGE(b,c,d) || RANGE(c,a,b) || RANGE(d,a,b))
#define INCLU(a,b,c,d) (RANGE(a,c,d) && (b,c,d))
#define PW(x) ((x)*(x))
#define ALL(x) (x).begin(), (x).end()
#define MODU 1000000007
#define bitcheck(a,b)   ((a >> b) & 1)
#define bitset(a,b)      ( a |= (1 << b))
#define bitunset(a,b)    (a &= ~(1 << b))
#define MP(a,b) make_pair((a),(b))
#define Manh(a,b) (abs((a).first-(b).first) + abs((a).second - ((b).second))
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;

const pii Dir[8] = { //?????????
	{ 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 },
	{ 1,1 },{ 1,-1 },{ -1,-1 },{ -1,1 }
};
template<typename A, size_t N, typename T>
void Fill(A(&array)[N], const T &val) {
	std::fill((T*) array, (T*) (array + N), val);
}

signed main() {
	int a, b, n;
	while (scanf("%d %d", &a, &b)) {
		if (a == 0)
			break;
		scanf("%d", &n);
		set<pii> st;
		REP(i, n) {
			pii cur;
			scanf("%d %d", &cur.first, &cur.second);

			st.insert(cur);
		}

		ll dp[17][17] = {};
		dp[1][1] = 1;


		for (int i = 2; a + b > i; i++) {
			rep(j, 1, a + 1) {
				if (dp[j][i - j]) {
					if (j + 1 <= a) {
						if (st.find({ j + 1, i - j }) == st.end())
							dp[j + 1][i - j] += dp[j][i - j];
					}
					if (i - j + 1 <= b) {
						if (st.find({ j, i - j + 1 }) == st.end())
							dp[j][i - j + 1] += dp[j][i - j];
					}
				}
			}
		}


		printf("%lld\n", dp[a][b]);
	}
	return 0;
}