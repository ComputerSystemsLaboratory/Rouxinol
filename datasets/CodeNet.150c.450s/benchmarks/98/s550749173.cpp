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

int main() {
	int n, m;
	while(cin >> n >> m, n|m) {
		int t[n], h[m];
		int sum_t = 0, sum_h = 0;
		for(int i=0; i<n; i++) {
			cin >> t[i];
			sum_t += t[i];
		}
		for(int i=0; i<m; i++) {
			cin >> h[i];
			sum_h += h[i];
		}

		int t2[n], h2[m];
		for(int i=0; i<n; i++)
			t2[i] = sum_t - t[i];
		for(int i=0; i<m; i++)
			h2[i] = sum_h - h[i];

		int cnt = 1000 * 10000;
		int taro = 0, hana = 0;

		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(t2[i] + h[j] == h2[j] + t[i]) {
					int just = t2[i] + h[j];
					if(cnt > just) {
						cnt = just;
						taro = t[i];
			 			hana = h[j];
					}
				}
			}
		}

		if(taro || hana)
			cout << taro << ' ' << hana << endl;
		else
			cout << "-1"  << endl;
	}


	return 0;
}