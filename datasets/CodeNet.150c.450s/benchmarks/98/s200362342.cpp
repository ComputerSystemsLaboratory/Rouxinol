#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	while (true) {
		int n, m;
		int tsum = 0, hsum = 0;
		cin >> n >> m;
		if (n == 0 && m == 0) return 0;
		vector<int>t;
		vector<int>h;
		for (int i = 0; i < n + m; i++) {
			int num;
			cin >> num;
			if (i < n) {
				t.push_back(num);
				tsum += num;
			}
			else {
				h.push_back(num);
				hsum += num;
			}
		}
		sort(t.begin(), t.end());
		sort(h.begin(), h.end());
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if ((tsum-t[i]+h[j])==(hsum-h[j]+t[i])) {
					cout << t[i]<<" "<<h[j] << endl;
					goto e; 
				}
			}
		}
		cout << "-1" << endl;
	e:;
	}
	return 0;
}
