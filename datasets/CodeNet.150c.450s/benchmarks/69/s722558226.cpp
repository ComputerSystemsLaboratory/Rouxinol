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
	while (cin >> n)
	{
		rep(k, n)
		{
			vector<int> balls(10);
			rep(i, 10) cin >> balls[i];
			function<bool(int, int, int)> dfs = [&](int left, int right, int idx)
			{
				if (idx == 10) return true;
				int x = balls[idx];
				return (left < x && dfs(x, right, idx + 1)) ||
					(right < x && dfs(left, x, idx + 1));
			};

			cout << (dfs(0, 0, 0) ? "YES" : "NO") << endl;
		}
	}

	return 0;
}