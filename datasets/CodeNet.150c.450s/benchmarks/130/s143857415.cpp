#include<iostream>

int main(void){
	int n, m;
	std::cin >> n >> m;
	int A[n][m], b[m] , y[n];
	
	for (int i=0; i < n; i++){ 
		for (int j = 0; j < m; j++) {
			std::cin >> A[i][j];
		}
		y[i] = 0;
	}
	
	for (int k = 0; k < m; k++){
		std::cin >> b[k];
	}
	
	
	for (int i=0; i < n; i++){ 
		for (int j = 0; j < m; j++) {
			y[i] +=  A[i][j]*b[j];
		}
	}
	
	for (int k = 0; k < n; k++){
		std::cout << y[k] << std::endl;
	}
	
	return 0;
}