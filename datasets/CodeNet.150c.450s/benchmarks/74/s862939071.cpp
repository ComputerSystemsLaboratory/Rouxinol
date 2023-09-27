#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int c[m];
	for(int i=0; i<m; i++)
		cin >> c[i];

	int dp[n+1];
	for(int i=0; i<=n; i++)
		dp[i] = i;

	for(int j=0; j<m; j++){
		for(int i=1; i<=n; i++){
			if(i/c[j] != 0)
				dp[i] = min(dp[i], dp[i-c[j]]+1);
		}
	}

	cout << dp[n] << endl;
}
