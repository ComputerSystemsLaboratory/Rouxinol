#include<iostream>

int main(){
	long int a, b, r;
	
	while(std::cin >> a >> b){
		long int product = a*b;
		
		// GCD
		if(a < b){
			long int temp = a;
			a = b;
			b = temp;
		}
		while((r = a%b) != 0){
			a = b;
			b = r;
		}
		
		// LCM
		long int lcm = product / b;
		
		// show
		std::cout << b << ' ' << lcm << std::endl;
	}
	
	return 0;
}