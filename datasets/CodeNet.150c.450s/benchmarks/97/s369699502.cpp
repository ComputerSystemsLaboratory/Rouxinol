#include<iostream>
#include<algorithm>
using namespace std;
int n, d, e, k[200][2], i, MIN[2], MAX[2];
int main() {
	while (true) {
		cin >> n; k[0][0] = 100; k[0][1] = 100; MIN[0] = 100; MIN[1] = 100; MAX[0] = 100; MAX[1] = 100;
		if (n == 0) {
			break;
		}
		for (i = 1; i < n; i++) {
			cin >> d >> e;
			if (e == 0) {
				k[i][0] = k[d][0]-1;
				k[i][1] = k[d][1];
			}
			if (e == 1) {
				k[i][0] = k[d][0];
				k[i][1] = k[d][1] + 1;
			}
			if (e == 2) {
				k[i][0] = k[d][0] + 1;
				k[i][1] = k[d][1];
			}
			if (e == 3) {
				k[i][0] = k[d][0];
				k[i][1] = k[d][1] - 1;
			}
		}
		for (int i = 0; i < n; i++) {
			MIN[0] = min(MIN[0], k[i][0]);
			MIN[1] = min(MIN[1], k[i][1]);
			MAX[0] = max(MAX[0], k[i][0]);
			MAX[1] = max(MAX[1], k[i][1]);
		}
		cout << MAX[0] - MIN[0] + 1 << ' ' << MAX[1] - MIN[1] + 1 << endl;
	}
}