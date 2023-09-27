#include <iostream>

int main() {
	int n[5];
	for(int i=0; i<5; i++)
		std::cin >> n[i];
	for(int i=4; i>0; i--){
		for(int j=0; j<i; j++){
			if(n[j] < n[j+1]){
				int t = n[j];
				n[j] = n[j+1];
				n[j+1] = t;
			}
		}
	}
	for(int i=0; i<5; i++){
		std::cout << n[i];
		if(i<4)
			std::cout << ' ';
		else
			std::cout << std::endl;
	}
	return 0;
}