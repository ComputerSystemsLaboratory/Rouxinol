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
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <complex>
#include <fstream>
#include <iomanip>
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
	int n;
	cin >> n;

	while(n--)
	{
		set<string> ss;
		string str;
		cin >> str;

		int n = str.size();
		string a, b, buf;
		for(int i = 1; i < n; i++)
		{
			a = str.substr(0, i), b = str.substr(i, n - i);
			buf = a;

			ss.insert(a + b); ss.insert(b + a);
			reverse(ALL(a));
			ss.insert(a + b); ss.insert(b + a);
			reverse(ALL(b));
			ss.insert(a + b); ss.insert(b + a);
			ss.insert(b + buf); ss.insert(buf + b);
		}

		cout << ss.size() << endl;
	}
}