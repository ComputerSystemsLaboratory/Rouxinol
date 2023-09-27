#include <bits/stdc++.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)

using namespace std;

long long int m, n, ans = 1;

int main(){
	cin >> m >> n;
	while (n > 0){
		if (n & 1) ans = ans*m % 1000000007;
		m = m*m % 1000000007;
		n >>= 1;
	}
	cout << ans << endl;
}