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
	int a, l;
	while(cin >> a >> l, a|l) {
		vector<int> line; // array of a
		set<int> chk; // for search

		//add a0
		line.push_back(a);
		chk.insert(a);

		FOR(j, 1, 21) {
			vector<int> v;
			int n = line[j-1];
			REP(i, l) {
				v.push_back(n % 10);
				n /= 10;
			}

			//min
			sort(v.begin(), v.end());
			int mi = 0;
			REP(i, l) {
				mi += v[i]; 
				if(i != l-1) mi *= 10;
			}

			//max
			reverse(v.begin(), v.end());
			int ma = 0;
			REP(i, l) {
				ma += v[i];
				if(i != l-1) ma *= 10;
			}

			//find
			if(chk.count(ma - mi)) {
				int p;
				REP(i, line.size())
					if(line[i] == ma - mi) p = i;
				cout << p << ' ' << ma - mi << ' ' << j - p << endl; 
				break;
			}
			else {
				line.push_back(ma - mi);
				chk.insert(ma - mi);
			}
		}
	}
	return 0;
}