#include <iostream>
#include <string>
#include <algorithm>

int dp[1001][1001];

int lcs(std::string X, std::string Y){
	int m,n,i,j;
	m = X.length();
	n = Y.length();
	for(i=0;i<std::max(m,n)+1;i++){
			dp[i][0] = 0;
			dp[0][j] = 0;
	}
	
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(X[i] == Y[j]){
				dp[i+1][j+1] = dp[i][j] +1;
			}
			else{
				dp[i+1][j+1] = std::max(dp[i][j+1], dp[i+1][j]);
			}
		}
	}
	return dp[m][n];
}
int main(void){
	int i,q,n,m;
	std::string str1, str2;
	std::cin >> q;
	for (i=0;i<q;i++){
		std::cin >> str1;
		std::cin >> str2;
		std::cout << lcs(str1, str2) << std::endl;
	}
	return 0;
}