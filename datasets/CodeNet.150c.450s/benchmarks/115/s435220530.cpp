#include <iostream>
#include <vector>
#include <string>

int main(){
	int q;
	std::string a, b;
	std::vector< std::vector< int > > dp;
	
	dp.resize(1001);
	for(int i=0;i<=1000;++i){
		dp[i].resize(1001);
	}
	
	std::cin >> q;
	
	for(int i=0;i<q;++i){
		std::cin >> a >> b;
		
		for(int x=1;x<=a.length();++x){
			for(int y=1;y<=b.length();++y){
				if(a[x-1] == b[y-1]){
					dp[x][y] = std::max(std::max(dp[x - 1][y - 1] + 1, dp[x][y - 1]), dp[x - 1][y]);
				}else{
					dp[x][y] = std::max(std::max(dp[x - 1][y - 1], dp[x][y - 1]), dp[x - 1][y]);
				}
			}
		}
		std::cout << dp[a.length()][b.length()] << std::endl;
	}
	
	return 0;
}