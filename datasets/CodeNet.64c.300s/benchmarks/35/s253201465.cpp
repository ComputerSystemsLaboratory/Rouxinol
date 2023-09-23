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
	int n;
	int u, k, v;
	int gra[101][101] = {};

	cin >> n;
	
	FOR(i, 1, n) {
		cin >> u >> k;
		FOR(t, 1, k) {
			cin >> v;
			gra[u][v] = 1;
		}
	}
	FOR(i, 1, n) {
		FOR(t, 1, n) {
			cout << gra[i][t];
			if (t != n) {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
