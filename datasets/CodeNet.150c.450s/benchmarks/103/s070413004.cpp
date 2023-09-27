#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <string>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cstring>
#include <tuple>
#include <utility>
#include <list>
#include <cmath>
#include <unordered_map>

using namespace std;

typedef long long LL;
typedef vector<int> Array;
typedef pair<int, int> P;

const int INF = 1 << 29;
const LL MOD = 100000;
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define all(c) (c).begin(), (c).end()

struct edge{ int to, cost; edge(int t, int c) :to(t), cost(c){} };

int main()
{
	//while (cin >> n)
	stringstream ss;
	//ss << "result" << i + 1 << ".txt";
	//FILE* fp_out = freopen(ss.str().c_str(), "w", stdout);

	int n;
	while (cin >> n && n)
	{
		int s; cin >> s;
		function<int(int, int, int)> dfs = [&](int now, int rem, int sum)
		{
			if (rem == 0 && sum == s) return 1;
			if (now == 10 || rem == 0 || sum > s) return 0;
			return dfs(now + 1, rem, sum) + dfs(now + 1, rem - 1, sum + now);
		};

		cout << dfs(0, n, 0) << endl;
	}

	return 0;
}