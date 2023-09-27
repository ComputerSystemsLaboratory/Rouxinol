#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <stack>
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

#define int int64_t

#define REP(i,f,n) for(int i=(f); i < (n); ++i)
#define PER(i,f,n) for(int i=(n-1); i >= f; --i)

constexpr int dx[4] = { 1, 0, -1, 0 };
constexpr int dy[4] = { 0, 1, 0, -1 };

template<typename STL> inline void print_STL(STL c, string ab = ""){
	cout << ab << '\n';
	for(auto t : c) cout << t << ' '; cout << '\n';}

template<typename VEC> inline void import_VEC(VEC& c, int n){
	typename VEC::value_type tmp;
	for(int i = 0; i < n; ++i){	cin >> tmp; c.push_back(tmp);} }

#define SPRE(x) setprecision(x) // 精度を指定

template<class T>	using Matrix = vector<vector<T>>;

signed main()
{
	cin.tie(0);
    ios::sync_with_stdio(false);
	int n;
	while(cin >> n)
	{
		if(n == 0)
			return 0;
		int maxi = 0, mini = INF;
		int sum = 0;
		REP(i, 0, n)
		{
			int tmp;
			cin >> tmp;
			sum += tmp;
			if(maxi < tmp)
				maxi = tmp;
			if(mini > tmp)
				mini = tmp;
		}
		sum -= maxi + mini;
		cout << sum / (n-2) << endl;;
	}

}