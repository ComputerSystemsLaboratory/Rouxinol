#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)
#define INF (int)1e8
#define _INF (int)-1e8
#define INFLL (long long)1e14
#define _INFLL (long long)-1e14
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<char> vc;
typedef vector<vector<char>> vvc;
typedef pair<int, int> P;

class BIT {
private:
	vll bi;
	int n;
	ll sum_0start(int t) {
		int x = 1, p = t;
		ll ret = 0;
		while (p > 0) {
			if (x & t) {
				ret += bi[p];
				p -= x;
			}
			x <<= 1;
		}
		return ret;
	}
public:
	BIT(vll a) {
		n = a.size();
		vll s(n + 1, 0);
		Loop1(i, n) {
			s[i] = s[i - 1] + a[i - 1];
		}
		bi.resize(n + 1, 0);
		Loop1(i, n) {
			int x = i;
			x = x & (x*(-1));
			bi[i] = s[i] - s[i - x];
		}
	}
	ll sum(int s, int t) {
		return sum_0start(t) - sum_0start(s);
	}
	void add(int k, int x) {
		k++;
		do {
			bi[k] += x;
			k += k&(k*(-1));
		} while (k <= n);
	}
};

int main() {
	int n, q; cin >> n >> q;
	vll a(n, 0);
	BIT bit(a);
	Loop(i, q) {
		int com, x, y; cin >> com >> x >> y;
		if (com == 0) bit.add(x - 1, y);
		else cout << bit.sum(x - 1, y) << endl;
	}
	return 0;
}