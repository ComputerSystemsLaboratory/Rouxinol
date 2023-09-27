#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define NMAX 50000
#define MMAX 20
#define INF 2e6
int c[MMAX] = {};
int dp[NMAX+1] = {};

int main() {
	int n,m;
	cin >> n >> m;
	
	for (int i=0;i<m;i++) {
	cin >> c[i];
	}

	dp[0] = 0;	
	for (int i=1;i<=n;i++) {
	dp[i] = INF;
	}
	
	for (int i=0;i<=n;i++) {
	for (int j=0;j<m;j++) {
	if (i>=c[j]) {
	dp[i] = min (dp[i], dp[i-c[j]] + 1);
	}
	}
	}
	

/*	for (int i=0;i<=n;i++) {
	cout << "dp " << dp[i] << endl;
	}
*/
	
	cout << dp[n] << endl;
	return 0;
}