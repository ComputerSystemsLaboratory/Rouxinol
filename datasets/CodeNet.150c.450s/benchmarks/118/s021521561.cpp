#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <map>
#include <tuple>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <numeric>

using namespace std;
typedef long long ll;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)


int main() {
	int n;
	cin >> n;
	int mill = 1;
	for (int i = 1; i < 1000; i++) {
		if (i % 3 == 0) {
			mill += 20*10;
		} else {
			mill += 20*5 + 19*5;
		}
	}
	
	for (int i = 0; i < n; i++) {
		int y, m, d;
		cin >> y >> m >> d;
		int t = 0;
		for (int i = 1; i < y; i++) {
			if (i % 3 == 0) {
				t += 20*10;
			} else {
				t += 20*5 + 19*5;
			}
		}
		for (int i = 1; i < m; i++) {
			if (i%2) {
				t += 20;
			} else {
				if (y%3 != 0)t += 19;
				else t+=20;
			}
		}
		t += d;
	
		cout << mill - t << endl;
	}

	return 0;
}