#include <iostream>

int main(void){
	int n;
	std::cin >> n;
	
	char list[101][101] = {0};
	
	int ci, cn, cval;
	for(int i=0; i<n; i++){
		std::cin >> ci >> cn;
		for(int j=0; j<cn; j++){
			std::cin >> cval;
			list[ci][cval] = 1;
		}
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			std::cout << (int)list[i][j];
			if(j!=n) std::cout << ' ';
		}
		std::cout << '\n';
	}
	
	return 0;
}