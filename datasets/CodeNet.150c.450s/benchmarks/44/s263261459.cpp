#include <iostream>
#include <array>
#include <algorithm>

int main(){

	int a1, a2, a3, a4, b1, b2, b3, b4;

	while(std::cin >> a1 >> a2 >> a3 >> a4){
		
		std::cin >> b1 >> b2 >> b3 >> b4;
		
		std::array<int, 4> A = {a1, a2, a3, a4};
		std::array<int, 4> B = {b1, b2, b3, b4};
		
		int hit = 0;
		int blow = 0;

		for(int i = 0; i < 4; ++i){
			
			if(A[i] == B[i])
				++hit;
			
	                else
			blow += std::count(A.begin(), A.end(), B[i]);

		}

		std::cout << hit << " " << blow << std::endl;
	}

		return 0;

}