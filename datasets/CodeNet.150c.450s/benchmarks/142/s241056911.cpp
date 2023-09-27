#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define repbit(bit,n) for (int bit = 0; bit < (1<<n); bit++)
using namespace std;
typedef long long ll;

const int INF = 1001001001;
//const ll INF = 1000000000000000000;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	rep(i,n) cin >> a[i];

	int le = 0, ri = k;
	rep(i, n - k) {
		if (a[le] < a[ri]) cout << "Yes" << endl;
		else cout << "No" << endl;
		le++; ri++;
	}
	return 0;
}
