#include <iostream>



int main(){
	int W, H, x, y, r, a=0;

	std::cin >> W >> H >> x >> y >> r;
	if (x - r >= 0){//???????????????
		if (y + r <= H){//????????????
			if (x + r <= W){//???????????????
				if (y - r >= 0){//????????????
					a = 1;
				}
			}
		}
	}
	
	if (a == 1){
		std::cout << "Yes\n";
	}
	else{
		std::cout << "No\n";
	}

	return 0;
}