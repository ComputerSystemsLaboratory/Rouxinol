#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin >> s1 >> s2;
	int l1 = s1.length(),l2 = s2.length();
	int dp[l1+1][l2+1];

	for(int i=0;i<=l1;i++){
		for(int j=0;j<=l2;j++){
			if(i == 0) dp[0][j] = j;
			else if(j == 0) dp[i][0] = i;
			else if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
			else{
				int a = dp[i-1][j] + 1;
				int b = dp[i][j-1] + 1;
				int c = dp[i-1][j-1]+1;
				dp[i][j] = min(min(a,b),c);
			}
		}
	}
	cout << dp[l1][l2] << endl;
	
}