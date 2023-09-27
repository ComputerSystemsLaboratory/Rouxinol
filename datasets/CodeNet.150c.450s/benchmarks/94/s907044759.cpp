#include "bits/stdc++.h"

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define REP3(i, x, n) for(decltype(x) i = (x); i <= (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1;i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define INF 1000000000
#define PI 3.14159265358979

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

// N, E, S, W
const int dx[4] = { -1, 0,  1,  0 };
const int dy[4] = { 0, 1,  0, -1 };

typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vll;
//==============================================

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vi a(n);

	REP(i, n) {
		cin >> a[i];
	}

	bool flag = true;
	int ans = 0;
	for (int i = 0; flag; i++) {
		flag = false;
		
		for(int j = n - 1; j >= i + 1; j--) {
			if (a[j] < a[j - 1]) {
				ans++;
				swap(a[j], a[j - 1]);
				flag = true;
			}
		}
	}

	REP(i, n - 1) cout << a[i] << " ";
	cout << a[n - 1] << "\n";
	cout << ans << "\n";
	return 0;
}