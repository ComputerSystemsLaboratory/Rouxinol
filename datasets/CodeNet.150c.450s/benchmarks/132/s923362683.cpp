/*

 *
 *  Created on: 2017/05/27
 *      Author: aihara
 */

#define MYDEBUG
#include <bits/stdc++.h>

#ifdef MYDEBUG
#define dbp(x) cout << "#x" << ": " << x << endl;
#else
#define dbp(x)
#endif
#define ll long long
using namespace std;

const int MAX_N = 60;
int per[MAX_N];
int main() {
	int n, p, winner, box;
	while (cin >> n >> p, n || p) {
		box = p;
		for (int i = 0; i < MAX_N; ++i) {
			per[i] = 0;
		}

		while (true) {
			bool finish = false;
			for (int i = 0; i < n; ++i) {
				if (per[i] != 0 && box == 0) {
					box = per[i];
					per[i] = 0;
				} else if (per[i] == 0 && box != 0) {
					per[i]++;
					box--;
				} else if (per[i] == 0 && box == 0) {
					continue;
				} else {
					per[i]++;
					box--;
				}
				if (per[i] == p) {
					winner = i;
					finish = true;
					break;
				}
			}
			if (finish) {
				cout << winner << endl;
				break;
			}
		}
	}
	return 0;
}