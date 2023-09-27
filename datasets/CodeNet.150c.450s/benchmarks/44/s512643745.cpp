#include <iostream>
#include <array>

int main(){
	std::array<u_int, 4> que;
	std::array<u_int, 4> ans;

	while(std::cin >> que[0] >> que[1] >> que[2] >> que[3] && std::cin >> ans[0] >> ans[1] >> ans[2] >> ans[3]){
		
		int hit = 0;
		int blow = 0;
		
		for(int i = 0; i < 4; ++i){
			if(que[i] == ans[i])
				hit++;

			if(que[i] == ans[(i + 1) % 4] || que[i] == ans[(i + 2) % 4] || que[i] == ans[(i + 3) % 4])
				blow++;
		}

		std::cout << hit << " " << blow << std::endl;
	}

	return 0;
}
