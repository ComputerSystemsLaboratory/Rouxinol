#include <iostream>
#include <vector>


int main(){
	std::vector<std::vector<int>> obstacle;
	std::vector<std::vector<int>> road;
	int a,b;

	while(std::cin >> a >> b){
		if(a ==0 && b == 0)break;
		int obstacleNum;
		std::cin >> obstacleNum;

		std::vector<std::vector<int>> obstacle(a+1, std::vector<int>(b+1, 0));
		std::vector<std::vector<int>> road(a+1, std::vector<int>(b+1, 0));

		int tmp_a,tmp_b;
		for(int i = 0;i < obstacleNum; ++i) {
			std::cin >> tmp_a >> tmp_b;
			obstacle[tmp_a][tmp_b] = 1;
		}
		for (int i = 1; i <= a; ++i){
			for (int j = 1; j <= b; ++j){
				if(i == 1 && j == 1)road[i][j] = 1;
				else if(obstacle[i][j] == 1) road[i][j] = 0;
				else road[i][j] = road[i-1][j] + road[i][j-1];
			}
		}

		std::cout << road[a][b] << std::endl;

	}
	return 0;
}