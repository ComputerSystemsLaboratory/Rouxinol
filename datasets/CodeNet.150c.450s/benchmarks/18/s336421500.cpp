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
#include <functional>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

#define int long

#define REP(i,f,n) for(int i=(f); i < (n); ++i)
#define PER(i,f,n) for(int i=(n-1); i >= f; --i)

constexpr int dx[4] = { 1, 0, -1, 0 };
constexpr int dy[4] = { 0, 1, 0, -1 };

//----------------------------------
//----------------------------------

template<typename STL> inline void print_STL(STL c, string ab = ""){
	cout << ab << c[0];
	for(int i = 1; i < c.size(); ++i) cout << ' ' << c[i]; }

template<typename STL> inline void import_STL(STL& c, int n){
	typename STL::value_type tmp;
	for(int i = 0; i < n; ++i){	cin >> tmp; c.push_back(tmp);} }

signed main()
{
	cin.tie(0);
    ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int total = 100000;
	REP(i, 0, n)
	{
		total += total / 20;
		if(total % 1000)
			total += 1000 - total % 1000;
	}
	cout << total << '\n';
}