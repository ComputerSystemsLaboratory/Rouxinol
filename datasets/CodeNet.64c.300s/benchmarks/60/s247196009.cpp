#include<iostream>

int main(){
	int dp[20][20], map[20][20];
	int w, h;
	while(std::cin >> w >> h, w){
		for(int i=0;i<16;i++){
			for(int j=0;j<16;j++){
				dp[i][j] = 0;
				map[i][j] = 0;
			}
		}

		int n;
		std::cin >> n;
		for(int i=0;i<n;i++){
			int a, b;
			std::cin >> a >> b;
			map[b-1][a-1] = 1;
		}

		if(map[0][0] != 1){
			dp[0][0] = 1;
		}
		for(int i=1;i<w;i++){
			if(map[0][i] != 1){//通れる
				dp[0][i] = dp[0][i-1];
			}
		}
		for(int i=1;i<h;i++){
			if(map[i][0] != 1){
				dp[i][0] = dp[i-1][0];
			}
		}

		for(int y=1;y<h;y++){
			for(int x=1;x<w;x++){
				if(map[y][x] != 1){
					dp[y][x] = dp[y-1][x] + dp[y][x-1];
				}
			}
		}
	
		std::cout << dp[h-1][w-1] << std::endl;
	}
}