#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<set>
using namespace std;
int main() {
	int n, p, m;
	while (cin >> n >> p >> m&&n != 0) {
		double sum , x,parson;
		double  a = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			a += x;
			if (i == p - 1) parson = x;
		}
		sum = ((a * 100 * (100 - m ))/ 100);
		if (parson == 0) cout << 0 << endl;
		else cout << floor(sum/parson) << endl;
	}
}