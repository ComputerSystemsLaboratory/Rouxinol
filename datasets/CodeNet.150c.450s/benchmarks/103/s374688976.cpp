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
	int n, s;

	while(cin >> n >> s && (n || s))
	{
		vint num(10);
		rep(i, 10)
			num[i] = i;

		vector<bool> par(10, 0);

		REP(i, 10-n, 10)
			par[i] = 1;

		int res = 0;
		do
		{
			int buf = 0;
			rep(i, 10)
				buf += i * par[i];
			
			res += buf == s;


		}while(next_permutation(ALL(par)));

		cout << res << endl;
	}
}