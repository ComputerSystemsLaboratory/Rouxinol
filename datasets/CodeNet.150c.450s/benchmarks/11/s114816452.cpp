#include<iostream>

int main(void){
	int n;
	std::cin >> n;
	
	int cards[4][13] = {{},{},{},{}};
	
	for (int i =1; i <=n; i++){
		char c;
		int r;
		std::cin >> c >> r;
		if (c == 'S') cards[0][r-1] = 1;
		if (c == 'H') cards[1][r-1] = 1;
		if (c == 'C') cards[2][r-1] = 1;
		if (c == 'D') cards[3][r-1] = 1;
	}
	
	for (int i = 0; i < 4; i ++){
		if (i == 0){
			for (int j = 0; j < 13; j++ ){
				if (cards[i][j] == 0){
					std::cout << "S " <<  j+1 << std::endl;
				}
			}
		}
		if (i == 1){
			for (int j = 0; j < 13; j++ ){
				if (cards[i][j] == 0){
					std::cout << "H " <<  j+1 << std::endl;
				}
			}
		}
		if (i == 2){
			for (int j = 0; j < 13; j++ ){
				if (cards[i][j] == 0){
					std::cout << "C " <<  j+1 << std::endl;
				}
			}
		}
		if (i == 3){
			for (int j = 0; j < 13; j++ ){
				if (cards[i][j] == 0){
					std::cout << "D " <<  j+1 << std::endl;
				}
			}
		}
	}
	
	return 0;
}