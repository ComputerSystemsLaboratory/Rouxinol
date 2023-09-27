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
	int sum[1001] = {};
	FOR(i, 1, 1000) {
		sum[i] = sum[i - 1] + i;
	}
	
	while (1) {
		int n;
		int count = 0;

		cin >> n;
		if (n == 0) {
			break;
		}
		FOR(i, 0, n-2) {
			FOR(t, i+2, n) {
				if (sum[t] - sum[i] == n) {
					count++;
				}
			}
		}
		cout << count << endl;
	}
}
