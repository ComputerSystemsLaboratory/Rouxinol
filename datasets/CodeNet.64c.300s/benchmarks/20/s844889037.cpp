#include <iostream>
#include <math.h>

int func(int n){
	int res=0;
	for(int i=1; i*n != 600; i++){
		res += i*n*i*n*n;
	}
	return res;
}

int main(void){
	int in;
	while(std::cin >> in){
		std::cout << func(in) << std::endl;
	}
	return 0;
}