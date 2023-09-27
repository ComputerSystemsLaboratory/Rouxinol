#include <iostream>
#include <array>

int main(void){
	std::array <int, 4> ansA;
	std::array <int, 4> ansB;

	while(std::cin >> ansA[0] >> ansA[1] >> ansA[2] >> ansA[3] >> ansB[0] >> ansB[1] >> ansB[2] >> ansB[3]){
		int hit = 0; //count hit
		int blow = 0; //count blow

		for(size_t i = 0; i < ansA.size(); ++i){ //judgment hit and blow
			for(size_t j = 0; j < ansB.size(); ++j){
				if(ansA[i] == ansB[j] && i == j){
					++hit;
				}else if(ansA[i] == ansB[j] && i != j){
					++blow;
				}
			}
		}

		std::cout << hit << " " << blow << std::endl; //output result
	}

	return 0;
}