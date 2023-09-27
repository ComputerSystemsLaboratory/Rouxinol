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
		bool flag = true;
		int n, m;
		int post = -1;
		int posh = -1;
		int mini = INF;
		int sa = 0;
		int tasu = 0;
		int hasu = 0;
		int taro[101] = {};
		int hana[101] = {};

		cin >> n >> m;
		if (n == 0 && m == 0) {
			break;
		}
		FOR(i, 1, n) {
			cin >> taro[i];
			tasu += taro[i];
		}
		FOR(i, 1, m) {
			cin >> hana[i];
			hasu += hana[i];
		}
		sa = tasu - hasu;
		if (sa % 2 == 1||sa%2==-1) {
			flag = false;
		}
		FOR(i, 1, n) {
			FOR(t, 1, m) {
				if (sa / 2 == taro[i] - hana[t]) {
					if (mini > taro[i] + hana[t]) {
						mini = taro[i] + hana[t];
						post = i;
						posh = t;
					}
				}
			}
		}
		if (post == -1) {
			flag = false;
		}
		if (flag) {
			cout << taro[post] << " " << hana[posh] << endl;
		}
		else {
			cout << -1 << endl;
		}
	}

}
