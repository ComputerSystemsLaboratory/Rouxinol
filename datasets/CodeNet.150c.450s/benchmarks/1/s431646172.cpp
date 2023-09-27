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
	vector<int> vi;
	int n, f; cin >> n >> f;
	vi.push_back(f);
	FOR(i, 1, n) {
		int in; cin >> in;
		if(vi[vi.size()-1] < in)
			vi.push_back(in);
		else if(in < vi[vi.size()-1]) {
			REP(j, vi.size()) {
				if(in == vi[j])
					break;
				else if(vi[j] > in) {
					vi[j] = in;
					break;
				}
			}
		}
//		REP(j, vi.size()) cout << vi[j] << ' ';
//		cout << endl;
	}
	cout << vi.size() << endl;
	return 0;
}