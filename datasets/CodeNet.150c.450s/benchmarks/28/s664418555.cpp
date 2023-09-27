#include <iostream>
#include <algorithm>

using namespace std;

int n, k, w[100000];
bool a(int q) {
	int ka=1,qa=0;
	for (int i = 0; i < n; i++) {
		qa += w[i];
		if (qa <= q) continue;
		else {
			ka++;
			qa = w[i];
			if (qa > q)return false;
		}
	}
	if (ka <= k)return true;
	else return false;
}
int binary_search() {
	long long int l = 0, r = 1000000000;
	while (r - l > 1) {
		int m = (r + l) / 2;
		if (a(m)) {
			r = m;
		}
		else {
			l = m + 1;
		}
	}
	if(a(l))return l;
	else return r;
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	int ans;
	ans = binary_search();
	cout << ans << endl;
	return 0;
}