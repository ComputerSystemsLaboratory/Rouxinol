#include <iostream>
#include <array>

int main(){

	std::array<int, 4> num_a, num;

	while(std::cin >> num_a[0] >> num_a[1] >> num_a[2] >> num_a[3]){
		std::cin >> num[0] >> num[1] >> num[2] >> num[3];
		int hit = 0, blow = 0;
		for(std::size_t i = 0; i < 4; ++i){
			if(num_a[i] == num[i]){
				++hit;
			}else{
				for(std::size_t j = 0; j < 4; ++j){
					if(num_a[j] == num[i]){
						++blow;
					}
				}
			}
		}
		std::cout << hit << " " << blow << std::endl;
	}

	return 0;
}