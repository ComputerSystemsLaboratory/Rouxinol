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
	int m, d;
	while(cin >> m >> d && m)
	{
		int month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		rep(i, m-1)
			d += month[i];

		switch(d%7)
		{
		case 1:
			cout << "Thursday" << endl;
			break;
		case 2:
			cout << "Friday" << endl;
			break;
		case 3:
			cout << "Saturday" << endl;
			break;
		case 4:
			cout << "Sunday" << endl;
			break;
		case 5:
			cout << "Monday" << endl;
			break;
		case 6:
			cout << "Tuesday" << endl;
			break;
		case 0:
			cout << "Wednesday" << endl;
			break;
		}
	}
}