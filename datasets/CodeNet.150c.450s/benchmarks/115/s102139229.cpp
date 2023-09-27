#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N,len1,len2;
string seq1,seq2;
int dp[1000+10][1000+10];

int main() {
	cin >> N;
	for (int M=0; M<N; M++){
		cin >> seq1 >> seq2;
		len1 = seq1.length();
		len2 = seq2.length();
		for (int i=1; i<=len1; i++){
			for (int j=1; j<=len2; j++){
				if (seq1[i-1] == seq2[j-1]){
					dp[i][j] = dp[i-1][j-1] + 1;
				}else if (dp[i][j-1] > dp[i-1][j]){
					dp[i][j] = dp[i][j-1];
				}else{
					dp[i][j] = dp[i-1][j];
				}
			}
		}
		cout << dp[len1][len2] << endl;
	}
	
	return 0;
}