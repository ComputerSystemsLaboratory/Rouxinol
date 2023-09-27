#include<iostream>

int main(void){
	int x, y, s, c;
	
	std::cin >> x >> y ;
	s = x*y;
	c = 2*x + 2*y;
	std::cout << s << " " << c << std::endl;
	
	return 0;
}