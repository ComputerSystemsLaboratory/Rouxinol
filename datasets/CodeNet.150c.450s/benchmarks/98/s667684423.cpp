#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m, n) {
		vector<int> v1(n), v2(m);
		int sum1 = 0, sum2 = 0;
		for (int i = 0;i < n; i++) {
			cin >> v1[i];
			sum1 += v1[i];
		}
		for (int i = 0;i < m; i++) {
			cin >> v2[i];
			sum2 += v2[i];
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		int r1 = -1, r2;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (sum1-v1[i]+v2[j] == sum2+v1[i]-v2[j]) {
					r1 = v1[i];
					r2 = v2[j];
					break;
				}
			}
			if (r1 != -1) break;
		}
		if (r1 == -1) cout << -1 << endl;
		else cout << r1 << " " << r2 << endl;
	}
	
	return 0;
}