#include<iostream>

int main(void){
	int a, b, c, t;
	
	std::cin >> a >> b >> c;
	
	/*まず a と b を並べる*/
	if (a > b){ 
		t = a;
		a = b;
		b = t;
	}
	
	/*そして 3 パターンに場合分け*/
	if (c <= a) std::cout << c << " " << a << " " << b << std::endl;
	else if (c >= b) std::cout << a << " " << b << " " << c << std::endl;
	else std::cout << a << " " << c << " " << b << std::endl;
	
	return 0;
}