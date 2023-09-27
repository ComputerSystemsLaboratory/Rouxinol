#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int dp[1001][1001];

int main() {
	string s1,s2;
	cin >> s1 >> s2;
	
	const int l1 =  s1.length();
	const int l2 =  s2.length();

	for (int p1 = 0; p1 <= l1; p1++) {
		for (int p2 = 0; p2 <= l2; p2++) {
			dp[p1][p2] = 0;
		}
	}

	for (int p1 = 0; p1 <= l1; p1++) {
		dp[p1][0] = p1;

	}
	for (int p2 = 0; p2 <= l2; p2++) {
		dp[0][p2] = p2;		
	}





	for (int p1 = 1; p1 <= l1; p1++) {
		for (int p2 = 1; p2 <= l2; p2++) {
			if (s1.at(p1-1) == s2.at(p2-1)) {
 				dp[p1][p2] = min(min(dp[p1-1][p2] + 1
 					,dp[p1][p2-1] + 1)
 					,dp[p1-1][p2-1]);
			} else {
 				dp[p1][p2] = min(min(dp[p1-1][p2] + 1
 					,dp[p1][p2-1] + 1)
 					,dp[p1-1][p2-1]+1
 					);
			}
		}
	}

	cout << dp[l1][l2] << endl;



	return 0;
}