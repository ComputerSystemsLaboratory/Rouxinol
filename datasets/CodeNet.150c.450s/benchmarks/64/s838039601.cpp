#include <iostream>
using namespace std;
int a[30], b[220];
int n, q;
int dp[30][2000];
// 选择第i个元素之后的一个可以组成和为m 
//bool solve(int i, int m)
//{
//	if(m == 0)	return true;
//	if(i >= n)	return false;
//	
//	return solve(i + 1, m) || solve(i + 1, m - a[i]);
//}
bool solve(int i, int m)
{
	if(m == 0)	
		dp[i][m] = true;
	else if(i >= n)	
		dp[i][m] = false;
	else if(solve(i + 1, m))
		dp[i][m] = true;
	else if(solve(i + 1, m - a[i]))
		dp[i][m] = true;
	else
		dp[i][m] = false;
	
	return dp[i][m];	
}
int main()
{
	cin >> n;
	for(int i = 0; i < n; ++ i)
		cin >> a[i];
	cin >> q;
	for(int i = 0; i < q; ++ i)
	{
		cin >> b[i];
		if(solve(0, b[i]))	cout << "yes" << endl;
		else	cout << "no" << endl;
	}
	
	return 0;
}
