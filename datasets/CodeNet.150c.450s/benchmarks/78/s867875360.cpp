#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };

struct UnionFind {
	vector<int> v;
	UnionFind(int n) : v(n) { for (int i = 0; i < n; i++) v[i] = i; }
	int  find(int x) { return v[x] == x ? x : v[x] = find(v[x]); }
	void unite(int x, int y) { v[find(x)] = find(y); }
};



int main() {
	
	vi nums;
	vi nums2;

	FOR(i, 1, 1000) {
		int num = i*(i + 1)*(i + 2) / 6;
		if (num > 1000000)
			break;
		nums.push_back(num);
		if (num % 2 == 1)
			nums2.push_back(num);
	}
	
	vi dp(1000000);
	vi dp2(1000000);
	
	REP(i, 1000000) {
		dp[i] = 1000000;
		dp2[i] = 1000000;
	}
	REP(i, nums.size())
		dp[nums[i]] = 1;
	REP(i, nums2.size())
		dp2[nums2[i]] = 1;

	FOR(i, 2, 1000000) {
		REP(j, nums.size())
			if (i - nums[j] > 0)
				dp[i] = min(dp[i], dp[i - nums[j]] + 1);
			else
				break;
		REP(j, nums2.size())
			if (i - nums2[j] > 0)
				dp2[i] = min(dp2[i], dp2[i - nums2[j]] + 1);
			else
				break;
	}
	
	int n;
	while (cin >> n, n) {
		cout << dp[n] << ' ' << dp2[n] << endl;
	}
}