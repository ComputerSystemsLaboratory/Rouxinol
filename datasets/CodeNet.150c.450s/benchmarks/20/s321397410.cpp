#include <iostream>

int main(){
	int sec,s,m,h;

	std::cin >> sec;
	h=sec/3600;
	m=(sec-h*3600)/60;
	s=sec%60;
	
	std::cout << h << ":" << m << ":" << s << "\n" ;

	return 0;
}