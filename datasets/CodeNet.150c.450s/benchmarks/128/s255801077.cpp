#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <cstdint>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

#define int long

#define REP(i,f,n) for(int i=(f); i < (n); ++i)
#define PER(i,f,n) for(int i=(n-1); i >= f; --i)

constexpr int evx[4] = { 1, 0, -1, 0 };
constexpr int evy[4] = { 0, 1, 0, -1 };

//----------------------------------
//----------------------------------

signed main()
{
    ios::sync_with_stdio(false);
	string s;
	cin >> s;
	PER(i, 0, s.size())
		cout << s[i];
	cout << endl;
}