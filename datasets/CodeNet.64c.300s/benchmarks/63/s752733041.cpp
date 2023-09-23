#include <iostream>
#include <utility>

int main(){

	int a, b;

	while(std::cin >> a >> b){

		int minmul; //least common multiple
		int maxdivi = 1; //greatest common divisor
		int tmp_a = a;
		int tmp_b = b;

		if(a == 0 || b == 0){
			std::cout << 0 << " " << 0 << std::endl;

		}else{					//Euclidean Algorithm

			if(b > a)
				std::swap(a, b);

			while(a % b != 0){
				a = a % b;
				if(b > a)
					std::swap(a, b);
			}
		
		maxdivi = b;
		minmul = (tmp_a / maxdivi) * tmp_b; //a*b/maxdivi

		std::cout << maxdivi << " " << minmul << std::endl;
		}
	}

	return 0;
}