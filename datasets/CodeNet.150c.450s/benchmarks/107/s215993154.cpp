#include <iostream>
#include <string>

using namespace std;
int dp[1001][1001];

int main(int argc, char const* argv[])
{
	string a, b;
	cin >> a;
	cin >> b;
	for(int i = 0; i < a.size() + 1; i++)dp[i][0] = i;
	for(int i = 0; i < b.size() + 1; i++)dp[0][i] = i;
	for(int i = 0; i < a.size(); i++){
			for(int j = 0; j < b.size(); j++){
					int cost = 1;
					if(a[i] == b[j])cost = 0;
					dp[i + 1][j + 1] = min(dp[i][j] + cost, dp[i][j + 1] + 1);
					dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i + 1][j] + 1);
			}
	}
	cout << dp[a.size()][b.size()] << endl;
	return 0;
}

