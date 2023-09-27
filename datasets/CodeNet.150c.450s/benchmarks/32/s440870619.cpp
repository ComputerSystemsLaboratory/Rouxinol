#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

#define EPS 1e-10
#define INF 1000000
#define mp make_pair
#define pb push_back

typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> pii;
typedef long long ll;

int const N_MAX = 100000;

int main() {
	int m, n_min, n_max;
	while (1) {
		cin >> m >> n_min >> n_max;
		if (!m && !n_min && !n_max) {
			return 0;
		}
		vi points, people(N_MAX+1, 0);
		for (int i = 0; i < m; i++) {
			int p;
			cin >> p;
			points.pb(p);
			people[p]++;
		}
		sort(points.begin(), points.end(), greater<int>());
		for (int i = N_MAX; i > 0; i--) {
			people[i-1] += people[i];
		}

		pii ans = mp(0, 0);
		for (int i = 0; i < points.size(); i++) {
			int point = points[i],
					n = people[point];
			if (n < n_min) {
				continue;
			} else if (n > n_max) {
				break;
			}
			int diff = point - points[i+1];
			if (diff > ans.second || (diff == ans.second && n > ans.first)) {
				ans = mp(n, diff);
			}
		}

		cout << ans.first << endl;
	}
}