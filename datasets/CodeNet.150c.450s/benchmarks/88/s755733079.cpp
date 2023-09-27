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
	vector< pair <double, pair<int, int> > > m;
	FOR(i, 1, 151) FOR(j, i+1, 151)
		m.push_back(make_pair(sqrt(i * i + j * j), make_pair(i, j)));
	sort(m.begin(), m.end());

//	REP(i, 1000)
//		cout << i << ' ' << m[i].first << ' ' << m[i].second.first << ' ' << m[i].second.second << endl;

	int w, h;
	while(cin >> h >> w, w|h) {
		double v = sqrt(w * w + h * h);
		REP(i, m.size()) {
			if(m[i].first >= v && m[i].second.first == h && m[i].second.second == w) {
				cout << m[i+1].second.first << ' ' << m[i+1].second.second << endl;
				break;
			}
		}
	}
	return 0;
}