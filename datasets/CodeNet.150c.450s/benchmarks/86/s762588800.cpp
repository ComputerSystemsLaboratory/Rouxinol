#include <bits/stdc++.h>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;

int main(void) {
	
	while (1) {
		int n, m, p;
		int money = 0;
		int x[101] = {};

		cin >> n >> m >> p;
		if (n == 0 && m == 0 && p == 0) {
			break;
		}
		FOR(i, 1, n) {
			cin >> x[i];
			money += x[i];
		}
		money *= (100 - p);
		if (x[m] == 0) {
			cout << 0 << endl;
		}
		else {
			cout << money / x[m] << endl;
		}
	}
}
