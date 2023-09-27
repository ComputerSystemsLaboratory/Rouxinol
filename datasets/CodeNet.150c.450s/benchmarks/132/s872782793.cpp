#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int>    VI;
typedef vector<bool>   VB;
typedef vector<string> VS;

#define MP make_pair
#define PB push_back
#define ALL(x)  (x).begin(),(x).end()
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

int n, p;
VI as;

int check(int c) {
	rep (i, as.size()) {
		if (as[i] == c) return i;
	}
	return -1;
}

int main(void) {
	while (1) {
		as.clear();
		cin >> n >> p;
		if (n == 0 && p == 0) break;
		as.resize(n);
		int ans;
		int c = p;
		rep (i, 1000010) {
			if ((ans = check(c)) != -1) {
				break;
			}
			if (p > 0) {
				as[i % n]++;
				p--;
			} else {
				p = as[i % n];
				as[i % n] = 0;
			}
		}
		cout << ans << endl;
	}
    return 0;
}