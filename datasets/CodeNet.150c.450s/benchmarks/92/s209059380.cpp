#include <iostream>

u_int getDigit(u_int n){
	u_int digit = 0;
	
	while(n > 0){
		n /= 10;
		++digit;
	}
	
	return digit;
}
  
int main(){
    u_int a, b;
    
    while(std::cin >> a >> b){
        std::cout << getDigit(a + b) << std::endl;
    }
	
    return 0;
}