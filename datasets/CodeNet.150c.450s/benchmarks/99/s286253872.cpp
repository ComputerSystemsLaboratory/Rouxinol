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

int con(char c)
{
	if(c == 'i') return 1;
	if(c == 'x') return 10;
	if(c == 'c') return 100;
	if(c == 'm') return 1000;
	if(c == 1)   return 'i';
	if(c == 2)	 return 'x';
	if(c == 3)   return 'c';
	if(c == 4)   return 'm';
}

int f(string num)
{
	int res = 0;
	rep(i, num.size())
	{
		if(!('1' < num[i] && num[i] <= '9')) 
		{
			if(i - 1 < 0 || !('1' < num[i-1] && num[i-1] <= '9'))
				res += con(num[i]);
			else
				res += con(num[i]) * (num[i-1] - '0');
		}
	}

	return res;
}

string F(int num)
{
	char cnum[16];
	sprintf(cnum, "%d", num);

	string res;
	rep(i, strlen(cnum))
	{
		if(cnum[i] == '0') continue;
		if(cnum[i] == '1')
			res += con(strlen(cnum) - i);
		else
		{
			res += cnum[i];
			res += con(strlen(cnum) - i);
		}
	}

	return res;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string s1, s2;
		cin >> s1 >> s2;

		cout << F(f(s1) + f(s2)) << endl;
	}
}