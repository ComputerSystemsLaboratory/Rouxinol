#include "bits/stdc++.h"

/*#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <deque>
#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <iterator>*/

using namespace std;

#define rep(i,a,b) for(int i=(a), i##_len=(b);i<i##_len;i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)

//#define int long long
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<double, double> pdd;

template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

int onecnt[1 << 10];

signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	rep(i, 0, 1 << 10)rep(j, 0, 10)
	{
		if ((i >> j) & 1)
		{
			onecnt[i]++;
		}
	}

	while (true)
	{
		int R, C, a;
		cin >> R >> C;
		if (R == 0 && C == 0)
		{
			break;
		}
		vector<int> A(C, 0);
		rep(i, 0, R)rep(j, 0, C)
		{
			cin >> a;
			if (a == 1)
			{
				A[j] |= (1 << i);
			}
		}

		vector<int> statecnt(1024, 0);
		rep(i, 0, C)
		{
			statecnt[A[i]]++;
		}
		int ans = 0;
		rep(i, 0, 1 << (R - 1))
		{
			vector<int> tcnt(1024);
			rep(j, 0, 1 << R)
			{
				tcnt[j] = onecnt[j^i];
				tcnt[j] = max(onecnt[j^i], R - onecnt[j^i]);
			}
			int tans = 0;
			rep(j, 0, 1 << R)
			{
				tans += statecnt[j] * tcnt[j];
			}
			chmax(ans, tans);
		}

		cout << ans << endl;
	}

	return 0;
}
