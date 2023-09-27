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
		bool flag = false;
		int n, p;
		int now;
		int pos = 0;
		int a[51] = {};

		cin >> n >> p;
		if (n == 0 && p == 0) {
			break;
		}
		now = p;
		while (1) {
			if (now > 0) {
				now--;
				a[pos]++;
				
			}
			else {
				FOR(i, 0, n - 1) {
					if (a[i] == p) {
						cout << i << endl;
						flag = true;
						break;
					}
				}
				now += a[pos];
				a[pos] = 0;
			}
			pos++;
			if (pos == n) {
				pos = 0;
			}
			if (flag == true) {
				break;
			}
		}
	}

}
