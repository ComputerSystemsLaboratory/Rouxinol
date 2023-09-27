#include "bits/stdc++.h"

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1;i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define PI 3.14159265358979

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

//================================================
bool func(vector<LD>x, vector<LD>y) {
	if ((y[1] - y[0]) * (x[3] - x[2]) == (y[3] - y[2]) * (x[1] - x[0])) return true;
	else return false;	
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	cin >> num;

	vector<LD>x(4); vector<LD>y(4);
	while(num--) {
		REP(i, 4) cin >> x[i] >> y[i];
		cout << (func(x, y) ? "YES" : "NO") << "\n";
	}
	return 0;
}