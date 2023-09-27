#include <iostream>

int main(){
	int x = 0, y = 0;//数値代入
	std::cin >> x;
	std::cin >> y;

	if (x == y){//同値なら即座に終了
		std::cout << y << std::endl;
		return 0;
	}

	if (x < y){//常にx>yとなるよう調整
		int a = x;
		x = y;
		y = a;
	}

	int r = 0;//ユークリッドの互除法(GCD(x,y)= GCD(y,r))
	while (1){
		r = x % y;
		if (r == 0){
			std::cout << y << std::endl;
			break;
		}
		x = y;
		y = r;
	}

	return 0;
}