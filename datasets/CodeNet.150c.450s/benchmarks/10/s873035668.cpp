#include<iostream>

int main(void){
	int n;
	int rooms[4][3][10];
	
	for (int i=0; i < 4; i++) for (int j = 0; j < 3; j++) for (int k = 0; k < 10; k++) rooms[i][j][k] = 0;
	
	std::cin >> n;
	
	for(int l = 1; l <= n; l++){
		int i, j, k, m;
		std::cin >> i >> j >> k >> m;
		rooms[i-1][j-1][k-1] += m; 
	}
	
	for (int i=0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				std::cout << ' ' << rooms[i][j][k];
			}
			std::cout << std::endl;
		}
		if (i < 3){
			for (int s = 1; s <= 20; s++) std::cout << "#";
			std::cout << std::endl;
		}
	}
	
	return 0;
}