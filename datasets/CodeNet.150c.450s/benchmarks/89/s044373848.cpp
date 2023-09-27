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


vector<bool> getPrimeTable(const int& max)
{
	vector<bool> table(max + 1);
	//fill(table.begin(), table.end(), false);
    
	table[2] = true;
    
	int i, j;
	for(i = 3; i <= max; i += 2)
	{
		table[i] = i % 2 == 1;
		for(j = 3; j*j <= i; j += 2)
		{
			if(!(i % j))
			{
				table[i] = false;
				break;
			}
		}
	}
    
	return table;
}


int main()
{
	int a, d, n;

	vector<bool> prime = getPrimeTable(1000000);

	while(cin >> a >> d >> n && n)
	{
		do
		{
			if(prime[a])
				n--;
			if(!n)
			{
				cout << a << endl;
				break;
			}
		}
		while(a += d);
	}
}