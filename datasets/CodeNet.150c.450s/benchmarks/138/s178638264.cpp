// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B&lang=jp
#include <iostream>

int main(){
	int x,y;
	std::cin >> x >> y;

	while(x >= 1 && y >= 1){
		int X,Y;
		if (x >= y){
			X = x;
			Y = y;
		} else {
			X = y;
			Y = x;
		}
		x = X % Y;
		y = Y;
	}

	std::cout << x+y << std::endl;

}