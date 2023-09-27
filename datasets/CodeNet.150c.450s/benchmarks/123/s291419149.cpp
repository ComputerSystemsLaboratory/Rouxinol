#include <bits/stdc++.h>

#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define rep(i, n) REP (i, 0, n)
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;

bool isPrime(int x) {
	if (x < 2) return false;
	else if (x == 2) return true;
	if (x % 2 == 0) return false;
	for (int i = 3; i * i <= x; i += 2) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	int n; cin >> n;
	int ans = 0;
	while (n--) {
		int x; cin >> x;
		bool check = isPrime(x);
		if (check) ans++;
	}
	cout << ans << endl;
}