#include<iostream>

int main(void){
	int n;
	std::cin >> n;
	
	int seq[n];
	
	for (int i =0; i <n; i++){
		std::cin >> seq[i];
	}
	
	for (int i = 0; i < n; i ++){
		if (i < n-1) std::cout << seq[(n-1) - i] << " ";
	  else std::cout << seq[ (n-1)-i] << std::endl;
	}
	
	return 0;
}