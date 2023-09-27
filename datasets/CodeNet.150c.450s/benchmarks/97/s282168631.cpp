#include <iostream>
#include <ccomplex>
#include <vector>
#include <cassert>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <list>
#include <assert.h>
#include <math.h>
#include <valarray>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <complex>
#include <list>
#include <time.h>
#include <stack>
#include <locale>
#include <clocale>
#include <ctype.h>
#include <wchar.h>

using namespace std;
typedef long long int LL;
typedef pair<long long int, long long int> pii;
typedef pair<double, double> pdd;

#define SORT(c) sort((c).begin(),(c).end())
#define BACKSORT(c) sort((c).begin(),(c).end(),std::greater<LL>())
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int xcomp(vector<LL>& a, vector<LL>& b) {
return a[0] < b[0];
}

#define XSORT(c) sort((c).begin(),(c).end(),xcomp)

#define ALL(x) (x).begin(),(x).end()
LL mod = 1000000007;

int main() {
	while (true) {
		LL N;
		cin >> N;
		if (N == 0) {
			break;
		}
		LL l = 0;
		LL r = 0;
		LL u = 0;
		LL d = 0;
		vector<vector<LL>> v(N, vector<LL>(2, 0));
		FOR(i, 1, N) {
			LL n, dd;
			cin >> n >> dd;
			if (dd == 0) {
				v[i][0] = v[n][0] - 1;
				v[i][1] = v[n][1];
			}
			else
				if (dd == 1) {
					v[i][0] = v[n][0];
					v[i][1] = v[n][1] - 1;
				}
				else
					if (dd == 2) {
						v[i][0] = v[n][0] + 1;
						v[i][1] = v[n][1];
					}
					else
						if (dd == 3) {
							v[i][0] = v[n][0];
							v[i][1] = v[n][1] + 1;
						}
			if (v[i][0] > l) {
				l = v[i][0];
			}
			if (v[i][0] < r) {
				r = v[i][0];
			}
			if (v[i][1] > u) {
				u = v[i][1];
			}
			if (v[i][1] < d) {
				d = v[i][1];
			}
		}
		cout << l - r + 1 << " " << u - d + 1 << endl;
	}
}