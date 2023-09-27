#include <iostream>
#include <cstring>
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef long long ll;

ll dp[101][21];
int a[101];

int main()
{
	memset (dp, 0LL, sizeof (dp ) );
	memset (a, 0, sizeof (a ) );

	int n;
	cin >> n;
	rep (i, n ){
		cin >> a[i];
	} // end rep

	dp[0][a[0]] = 1LL;
	for (int i = 1; i < n - 1; i++ ){
		for (int j = 0; j <= 20; j++ ){
			if (dp[i-1][j] ){
				if ( j + a[i] <= 20 ){
					dp[i][j + a[i]] += dp[i-1][j];
				} // end if
				if ( j - a[i] >= 0 ){
					dp[i][j - a[i]] += dp[i-1][j];
				} // end if
			} // end if
		} // end for
	} // end for

	cout << dp[n-2][a[n-1]] << endl;

	return 0;
}