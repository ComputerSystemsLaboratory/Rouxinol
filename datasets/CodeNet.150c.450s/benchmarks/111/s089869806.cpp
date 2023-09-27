#include <iostream>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int n;
int x[100];
ll dp[21][100];

int main(){
	cin >> n;
	rep(i,n) cin >> x[i];
	dp[x[0]][0] = 1;
	for(int i = 1; i < n-1; i++){
		for(int j = x[i]; j < 21; j++) dp[j-x[i]][i] += dp[j][i-1];
		for(int j = 0; j < 21-x[i]; j++) dp[j+x[i]][i] += dp[j][i-1];
	}
	cout << dp[x[n-1]][n-2] << endl;
}