#include <iostream>

u_int getDigit(u_int n){
	u_int count = 1;
	
	while(n / 10 != 0){
		n /= 10;
		++count;
	}
	
	return count;
}
  
int main(){
    u_int a, b;
    
    while(std::cin >> a >> b){
        std::cout << getDigit(a + b) << std::endl;
    }
	
    return 0;
}