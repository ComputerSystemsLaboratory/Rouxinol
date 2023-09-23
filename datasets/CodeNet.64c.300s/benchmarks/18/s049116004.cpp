#include <iostream>
#include <cmath>
int n;

int cnt(int i){
	if(i == 1)	return 1;
	if(i == 2)	return 2;
	if(i == 3)	return 4;

	return cnt( i-3 ) + cnt( i-2 ) + cnt( i-1 );
}


int main(void){
	while(1){
		std::cin >> n;
		if(n == 0)	return 0;
		std::cout << std::ceil(cnt(n) / 10.0 / 365.0) << std::endl;
	}
}