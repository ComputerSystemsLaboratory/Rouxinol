#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	while (cin>>n) {
		if (!n) break;
		vector<int> dp(n+3,0);
		dp[0] = 1;
		for (auto i = 0; i < n; i++)
			for (auto j = 1; j <= 3; j++)
				dp[i+j] += dp[i];
		int day = dp[n]/10+!!(dp[n]%10),
		    year = day/365+!!(day%365);
		cout << year << endl;
	}
	return 0;
}