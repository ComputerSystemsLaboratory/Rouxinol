#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define INF (1 << 30)
#define INFL (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define EPS 1e-10

#define ll long long
#define ull unsigned long long
#define all(a) (a).begin(), (a).end()

int main() {
	int m, f, r, s;
	char c;
	while (cin >> m >> f >> r) {
		s = m + f;
		if (m < 0 && f < 0)
			break;
		else if (m < 0 || f < 0)
			c = 'F';
		else if (s >= 80)
			c = 'A';
		else if (s >= 65)
			c = 'B';
		else if (s >= 50 || (s >= 30 && r >= 50))
			c = 'C';
		else if (s >= 30)
			c = 'D';
		else
			c = 'F';
		cout << c << endl;
	}

	return 0;
}
