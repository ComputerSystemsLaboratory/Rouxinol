#include <iostream>
using namespace std;

const int N = 44;
int dp[N] = {};
int n;

int rec(int x)
{
	if(x == 0 || x == 1){
		dp[x] = 1;
		return dp[x];
	}
	
	if(dp[x] != 0)
		return dp[x];
	
	return dp[x] = rec(x - 1) + rec(x - 2);
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	cin >> n;
	
	cout << rec(n) << endl;
	
	return 0;
}