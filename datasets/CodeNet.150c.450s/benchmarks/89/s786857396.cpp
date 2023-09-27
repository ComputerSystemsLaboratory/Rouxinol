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
	int prime[100000] = {};
	int pos = 2;
	prime[1] = 2;
	FOR(i, 3, 1000000) {
		FOR(t, 2, sqrt(i)) {
			if (i%t == 0) {
				break;
			}
			if (t + 1 > sqrt(i)) {
				prime[pos] = i;
				pos++;
			}
		}
	}
	
	while (1) {
		int a, d, n;
		int now = 1;
		bool flag = true;

		cin >> a >> d >> n;

		if (a == 0) {
			break;
		}
		for (int i = a; i <= 1000000; i += d) {
			FOR(t, now, pos-1) {
				if (i == prime[t]) {
					if (n == 1) {
						cout << i << endl;
						now = t;
						flag = false;
						break;
					}
					else {
						n--;
						now = t;
					}
				}
				if (prime[t] > i) {
					now = t - 1;
					break;
				}
			}
			if (flag == false) {
				break;
			}
		}
	}

}
