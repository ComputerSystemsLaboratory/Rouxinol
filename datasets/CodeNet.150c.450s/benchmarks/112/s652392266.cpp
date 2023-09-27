#include <iostream>

int main(void){
	char hen[128];
	int n;

	while(true){

		for(int i=0; i<128; i++) hen[i] = i;

		std::cin >> n;
		if(!n) break;
		for(int i=0; i<n; i++){
			char from, to;
			std::cin >> from >> to;
			hen[from] = to;
		}
		std::cin >> n;
		for(int i=0; i<n; i++){
			char c;
			std::cin >> c;
			std::cout << hen[c];
		}
		std::cout << '\n';

	}

	return 0;
}