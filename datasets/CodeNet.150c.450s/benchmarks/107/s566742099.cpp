#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int len1,len2;
string seq1,seq2;
int dp[1000+10][1000+10];

int main() {
	for (int i=0; i<=1000; i++){
		dp[i][0] = i;
		dp[0][i] = i;
	}
	
	cin >> seq1 >> seq2;
	len1 = seq1.length();
	len2 = seq2.length();
	
	for (int i=1; i<=len1; i++){
		for (int j=1; j<=len2; j++){
			if (seq1[i-1] == seq2[j-1]){
				dp[i][j] = dp[i-1][j-1];
			}else{
				dp[i][j] = min((dp[i-1][j-1]+1), min((dp[i][j-1]+1), (dp[i-1][j]+1)));
			}
		}
	}
	cout << dp[len1][len2] << endl;
	return 0;
}