#include "bits/stdc++.h"

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1;i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define INF 999999999
#define PI 3.14159265358979

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

//================================================
int func(int n, int s, int c) {
	if (n == 0 && s == 0) return 1;
	
	if ((s > 0 && n == 0) || (n >= 2 && s <= 0) || c < 0){
		return 0;
	}

	if (c > s) {
		return func(n, s, c - 1);
	} else {
		return func(n - 1, s - c, c - 1) + func(n, s, c - 1);
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, s;
	while (cin >> n >> s) {
		if (n == 0 && s == 0 ) break;
		cout << func(n, s, 9) << "\n";
	}
	return 0;
}