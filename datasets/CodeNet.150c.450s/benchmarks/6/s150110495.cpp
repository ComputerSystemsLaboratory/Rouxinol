#include <iostream>
#include <math.h>

int main(){
	
	int x, y, z;
	
 	std::cin >> x >> y >> z;

	if(x<y && y<z){
		std::cout  << "Yes" << std::endl;
	}else{
		std::cout  << "No" << std::endl;
	}
}