#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;
#define REP(i,n) for(int i = 0; i < (int)n; i++)
#define FOR(i,a,b) for(int i = a; i < (int)b; i++)
const int INF = 1<<28;

int main() {
	int N, M;
	while(cin>> N >> M, N|M) {
		vector< pair<int, int> > v;
		REP(i, N) {
			pair<int, int> p;
			cin >> p.second >> p.first;
			v.push_back(p);
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());

		int ans = 0;
		REP(i, N) {
			if(v[i].second <= M)
				M -= v[i].second;
			else {
				v[i].second -= M;
				M = 0;
				ans += v[i].first * v[i].second;
			}
		}
		cout << ans << endl;
	}
	return 0;
}