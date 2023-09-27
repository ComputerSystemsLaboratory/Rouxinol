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
	int w, h;

	while (scanf("%d %d", &h, &w)) {
		if (h == 0 & w == 0)
			break;
		vector<vector<int>> stat(h, vector<int>(w));
		vector<int> hsum(w);
		REP(i, h) {
			REP(j, w) {
				scanf("%d", &stat[i][j]);
				hsum[j] += 1 - stat[i][j];
			}
		}
		function<int(int, int)> func = [&](int cur, int st) {

			if (cur == h) {
				vector<int> buf(hsum);
				REP(i, h) {
					if (bitcheck(st, i)) {
						REP(j, w) {
							if (stat[i][j]) {
								buf[j] ++;
							}
							else {
								buf[j] --;
							}
						}
					}
				}
				int sum = 0;
				for (auto itr : buf) {
					sum += max(abs(h - itr), abs(itr));
				}
				return sum;
			}
			int buf = func(cur + 1, st);
			bitset(st, cur);
			return max(buf, func(cur + 1, st));
		};
		printf("%d\n", func(0, 0));
	}
	return 0;
}