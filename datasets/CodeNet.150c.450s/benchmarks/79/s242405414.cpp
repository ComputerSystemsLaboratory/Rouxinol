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
		int n, r;
		int p, c;
		int a[51] = {};
		int b[51] = {};
		
		cin >> n >> r;
		if (n == 0 && r == 0) {
			break;
		}
		FOR(i, 1, n) {
			a[i] = n - i + 1;
		}
		FOR(i, 1, r) {
			cin >> p >> c;
			FOR(t, 1, p - 1) {
				b[t] = a[t];
			}
			FOR(t, 1, c) {
				a[t] = a[p + t - 1];
			}
			FOR(t, 1, p - 1) {
				a[c+t] = b[t];
			}
		}
		cout << a[1] << endl;
	}

}
