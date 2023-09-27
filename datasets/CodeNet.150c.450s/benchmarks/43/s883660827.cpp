#include <iostream>

int main(int argc, char **argv){
	int n = 0;
	while(std::cin >> n, n > 0){
		int a = 0;
		int b = 0;
		int a_score = 0;
		int b_score = 0;

		for(int i = 0; i < n; i++){
			std::cin >> a >> b;
			if(a > b){
				a_score += a + b;
			}
			else if(a < b){
				b_score += a + b;
			}
			else{
				a_score += a;
				b_score += b;
			}
		}

		std::cout << a_score << " " << b_score << std::endl;
	}
	return 0;
}