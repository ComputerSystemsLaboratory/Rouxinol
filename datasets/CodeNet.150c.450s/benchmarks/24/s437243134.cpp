#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std; int d[11], n, m, i, a, b, sum, e;
int main() {
	while (true) {
		memset(d, 0, sizeof(d)); sum = 0;
		cin >> n >> m; if (!n) { break; }
		for (i = 0; i < n; i++) {
			cin >> a >> b;
			d[b] += a;
		}
		for (i = 10; i >= 0;i--){
			e = min(d[i], m);
			m -= e;
			sum += i*(d[i] - e);
		}
		cout << sum << endl;
	}
}