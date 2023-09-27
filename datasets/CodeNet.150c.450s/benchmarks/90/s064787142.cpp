#include <bits/stdc++.h>

#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define rep(i, n) REP (i, 0, n)
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;

int main() {
	int data[100];
	rep (i, 100) data[i] = 0;
	int num, cnt = 0;
	while (cin >> num) {
		data[num]++;
	}
	rep(i, 100) {
		cnt = max(cnt, data[i]);
	}
	rep(i, 100) {
		if (data[i] == cnt) {
			cout << i << endl;
		}
	}
}