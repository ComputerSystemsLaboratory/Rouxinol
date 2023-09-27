#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<math.h>
#include<queue>
using namespace std;

int main() {
	const long long int mod = 1000000007;
	map<long long int, long long int>mp;
	//cout << fixed << setprecision(10);
	long long int  n, m, a[2000], b, c, d, k, h, w, left = 1, right = 0;
	long long int sc, sr, num2, no[1005][1005] = {}, res = 999999999, count = 0, now = 0, mi = 9999999999;

	string str, t;

	cin >> n;
	while (1) {
		res = 9999999999999999;
		if (n == 0) { return 0; }
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n-1; i++) {
			if (res > a[i + 1] - a[i]) {
				res = a[i + 1] - a[i];
			}
		}
		cout << res << endl;

		cin >> n;
	}
	
}

