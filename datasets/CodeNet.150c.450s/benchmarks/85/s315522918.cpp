#include <iostream>
#include <vector>

int main(){
	int n;
	std::vector< int > r, c;
	std::vector< std::vector< int > > dp;
	
	std::cin >> n;
	r.resize(n);
	c.resize(n);
	dp.resize(n);
	
	for(int i=0; i<n; ++i){
		std::cin  >> r[i] >> c[i];
		dp[i].resize(n);
		dp[i][i] = 0;
	}
	
	for(int m=1; m<n; ++m){
		for(int i=0; i<n; ++i){
			int j = m + i;
			if(j>=n)break;
			
			int min = -1;
			for(int k=i; k<j; ++k){
				int t = dp[i][k] + dp[k+1][j] + r[i] * c[k] * c[j];
				
				if(min == -1 || min > t){
					min = t;
				}
			}
			dp[i][j] = min;
		}
	}
	
	std::cout << dp[0][n-1] << std::endl;
	
	return 0;
}