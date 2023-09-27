#include <iostream>

int main(){
	int a,b;
	while(std::cin >> a >> b){

		if(a == 0 && b == 0) return 0;
	
		int road[a][b];

		int n;
		std::cin >> n;
		int notRoad[n][2];

		int x,y;
		for(int i = 0; i < n; ++i){
			std::cin >> x >> y;
			notRoad[i][0] = x;
			notRoad[i][1] = y;
		}

		for(int i = 0; i < a; ++i){
			for(int j = 0; j < b; ++j){
				int construct = 0;
				for(int k = 0; k < n; ++k){
					if(i == (notRoad[k][0]) - 1 && j == (notRoad[k][1]) - 1){
						construct = 1;
					}
				}
				if(construct == 1){
					road[i][j] = 0;//工事中を除去
				} else if(i == 0 && j == 0){
					road[0][0] = 1;//スタート地点
				} else if((i - 1) < 0){
					road[i][j] = road[i][j-1];//最西
				} else if((j - 1) < 0){
					road[i][j] = road[i-1][j];//最南
				} else{
					road[i][j] = road[i-1][j] + road[i][j-1];
				}
			}
		}

		std::cout << road[a-1][b-1] << std::endl;
	}
}
