#include<iostream>
#include<algorithm>
#define SEISEKI 10000000

using namespace std;

int main() {
	while (1) {
		int n;
		int ans=SEISEKI;

		cin >> n;
		int a[1001];
		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(a, a+n);	//昇順

		for (int i = 0; i<n; i++) {
			for (int j = i + 1; j < n; j++) {
				ans = min(ans, abs(a[i] - a[j]));
			}
		}
		cout << ans<<endl;
	}
	return 0;
}
