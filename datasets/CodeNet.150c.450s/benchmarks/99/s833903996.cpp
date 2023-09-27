#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>


using namespace std;

#ifdef _MSC_VER
#define __typeof__ decltype
template <class T> int __builtin_popcount(T n) { return n ? 1 + __builtin_popcount(n & (n - 1)) : 0; }
#endif

#define foreach(it, c) for (__typeof__((c).begin()) it=(c).begin(); it != (c).end(); ++it)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define clear(arr, val) memset(arr, val, sizeof(arr))

#define rep(i, n) for (int i = 0; i < n; ++i)

template <class T> void max_swap(T& a, const T& b) { a = max(a, b); }
template <class T> void min_swap(T& a, const T& b) { a = min(a, b); }

typedef long long ll;
typedef pair<int, int> pint;

const double EPS = 1e-8;
const double PI = acos(-1.0);
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { 1, 0, -1, 0 };


const char* roma = "ixcm";
int dec(const string& s)
{
	int res = 0;
	for (int i = 0, t = 1; i < 4; ++i, t *= 10)
	{
		int k = s.find(roma[i]);
		if (k != -1)
		{
			if (k == 0 || !isdigit(s[k - 1]))
				res += t;
			else if (k > 0)
				res += t * (s[k - 1] - '0');
		}
	}
	return res;
}
string enc(int n)
{
	string res;
	for (int i = 0; i < 4; ++i, n /= 10)
	{
		int r = n % 10;
		if (r == 1)
			res = roma[i] + res;
		else if (r > 1)
			res = (char)('0' + r) + string() + roma[i] + res;
	}
	return res;
}
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string a, b;
		cin >> a >> b;
		cout << enc(dec(a) + dec(b)) << endl;
	}
}