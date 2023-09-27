#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	for (int n; cin >> n;) {
		int M, m, R;
		cin >> R; m = R;
		cin >> R; M = R - m; m = min(R, m);
		for (int j = 2; j < n; j++) {
			cin >> R;
			M = max(R - m, M);
			m = min(R, m);
		}
		cout << M << endl;
	}
	return 0;
}