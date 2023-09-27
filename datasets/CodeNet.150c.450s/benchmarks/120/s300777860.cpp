#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b, a | b) {
		vector<vector<int>>d(a);
		for (int c = 0; c < a; c++) {
			vector<int>e(b);
			for (int f = 0; f < b; f++)cin >> e[f];
			d[c] = e;
		}
		int s = 0;
		for (int n = 0; n < (1 << a); n++) {
			vector<vector<int>>p;
			copy(d.begin(), d.end(),back_inserter(p));
			int r = 0;
			for (int m = 1; m <= n; m <<= 1) {
				if (n&m) {
					for (int x = 0; x < b; x++) {
						if (p[r][x])p[r][x]--;
						else p[r][x]++;
					}
				}
				r++;
			}
			int z = 0;
			for (int aa = 0; aa < b; aa++) {
				int cc = 0;
				for (int bb = 0; bb < a; bb++) {
					if (p[bb][aa])cc++;
				}
				z += max(cc, a - cc);
			}
			s = max(z, s);
		}
		cout << s << endl;
	}
}