#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int n;
	while (true) {
		cin >> n;
		if (!n)break;

		int s, M, m, sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (!i) {
				M = m = s;
			}
			else if (i == 1) {
				M = max(s, M);
				m = min(s, m);
			}
			else if (s > M) {
				sum += M;
				M = s;
			}
			else if (s < m) {
				sum += m;
				m = s;
			}
			else {
				sum += s;
			}
		}
		cout << sum / (n - 2) << endl;
	}
	return 0;
}