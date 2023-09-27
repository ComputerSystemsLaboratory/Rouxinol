#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

#define REP(i,f,n) for(int i=(f); i < (n); ++i)
#define PER(i,f,n) for(int i=(n-1); i >= f; --i)


//----------------------------------
//----------------------------------

int64_t gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

signed main()
{
    ios::sync_with_stdio(false);
	int64_t a, b;
	while(cin >> a)
	{
		cin >> b;
		int64_t gc = gcd(max(a,b),min(a,b));
		cout << gc << ' ' << a * b / gc << endl;
	}

}