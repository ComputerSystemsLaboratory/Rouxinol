#include <iostream>

int main(){
	int a, b;
	
	while(std::cin >> a >> b){
		int n = a + b;
		int count = 1;
		//10??§?????£????????°????±???????
		while(n / 10 != 0){
			++count;
			n /= 10;
		}
		
		std::cout << count << std::endl;
	}
	return 0;
}