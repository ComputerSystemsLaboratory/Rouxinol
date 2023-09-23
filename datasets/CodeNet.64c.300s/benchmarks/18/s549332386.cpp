#include <iostream> 
#include <queue>
#include <string>
#include <set>
using namespace std;

int main()
{
	int n;
	int dp[30];
	int year;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	while(cin >> n && n != 0){
		
		for(int i = 0; i < n; i++)
		{
			dp[i+3] = dp[i+2] + dp[i+1] + dp[i]; 
		}
		year = dp[n]/3650 + 1;
		cout << year << endl;
	}
	return 0;
}
