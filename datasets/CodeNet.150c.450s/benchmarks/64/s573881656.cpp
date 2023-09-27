#include <iostream>
#include <ios>
using namespace std;
long n, A[21] = {}, DP[21][2000] = {};

void createDP(){
	for (int i = 1; i <= n; ++i){
		DP[i][0] = DP[i][A[i]] = 1;
		for (int j = 1; j < 2000; ++j){
			if (DP[i - 1][j] == 1) DP[i][j] = 1;
			if (A[i] < j && DP[i - 1][j - A[i]] == 1) DP[i][j] = 1;
		}
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	long m, i, k;
	cin >> n;
	for (i = 1; i <= n; ++i) cin >> A[i];
	createDP();
	cin >> m;
	while(m--){
		cin >> k;
		cout << ((DP[n][k] == 1) ? "yes\n" : "no\n");
	}
	return 0;
}