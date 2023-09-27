#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

int main()
{
	vint a(4), b(4);
	while(true)
	{
		rep(i, 8)
			cin >> (i < 4 ? a[i] : b[i-4]);
		if(cin.eof()) break;

		int hit = 0;
		rep(i, 4)
			hit += a[i] == b[i];

		int brow = -hit;
		rep(i, 4)
			brow += (a[i] == b[0] || a[i] == b[1] || a[i] == b[2] || a[i] == b[3]);
		cout << hit << " " << brow << endl;
	}
}