#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define vec vector

int ret(int k)
{
	if (k > 0) return k;
	else return - k;
}

int main(void)
{
	while(1) {
		int n, m;
		cin >> n >> m;
		if (n == 0 || m == 0) break;
		vec<int> a(n), b(m);
		int sum = 0;
		int suma = 0, sumb = 0;
		rep(i, n) {
			cin >> a[i];
			sum += a[i];
			suma += a[i];
		}
		rep(i, m) {
			cin >> b[i];
			sum += b[i];
			sumb += b[i];
		}

		if (sum % 2) {
			cout << -1 << endl;
			continue;
		}

		int keepa = - 1;
		int keepb = - 1;
		int min = 1000000000;
		rep(i, n) rep(j, m) {
			if (suma - sumb == 2 * (a[i] - b[j])) {
				if (min > a[i] + b[j]) {
					keepa = a[i];
					keepb = b[j];
					min = keepa + keepb;
				}
			}
		}
		if (keepa == -1) cout << -1 << endl;
		else cout << keepa << " " << keepb << endl;
	}
	return 0;
}