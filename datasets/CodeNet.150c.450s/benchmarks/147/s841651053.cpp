#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <list>
#include <ctime>
#include <complex>
#include <bitset>
#include <tuple>
#include <functional>

#define IOS ios::sync_with_stdio(false);cin.tie(0)
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define MOD 1000000007LL
#define rep(i,a,n) for (int i=a ; i<n ; i++)
#define per(i,a,n) for (int i=n-1 ; i>=a ; i--)
#define LLINF (llong)1e18+5
#define INF 1e9+1
#define endl '\n'

using namespace std;
using llong = long long;
using VI = vector<int>;
using VLL = vector<long long>;
using PII = pair<int, int>;

//struct cmp {
//	bool operator() (pair<PII, int> a, pair<PII, int> b)
//	{
//		return a.ss > b.ss;
//	}
//};

int main()
{
	IOS;
	
	VI ans(240001);
	rep(i, 1, 101)
	{
		rep(j, 1, 101)
		{
			rep(k, 1, 101)
			{
				ans[((i + j) * (i + j) + (j + k) * (j + k) + (k + i) * (k + i)) / 2] ++;
			}
		}
	}
	int n;
	cin >> n;
	rep(i, 1, n+1)
	{
		cout << ans[i] << endl;
	}

	return 0;
}