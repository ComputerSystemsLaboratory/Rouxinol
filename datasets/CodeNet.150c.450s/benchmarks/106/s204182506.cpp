#include<iostream>

int main(void){
	int a, b, c, divi, count = 0;
	
	std::cin >> a >> b >> c; 
	divi = a;
	
	while (a <= divi && divi <= b){
		if ( c % divi == 0) count += 1;
		divi += 1;
	}
	std::cout << count <<  std::endl;
	
	return 0;
}