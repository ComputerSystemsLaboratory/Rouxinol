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
		LL a, b, c;
		cin >> a >> b >> c;
		if (a == 0) {
			break;

		}
		LL max = 0;
		FOR(i,1, 1001) {

			FOR(j, 1, 1001) {
				if (i*(100 + a) / 100 + j*(100 + a) / 100 == c) {
					if (max < i*(100 + b) / 100 + j*(100 + b) / 100) {
						max = i*(100 + b) / 100 + j*(100 + b) / 100;
					}
				}
			}
		}
		cout << max << endl;
	}
}