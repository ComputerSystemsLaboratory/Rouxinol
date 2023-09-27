#include<iostream>

int main(){
	int a,b;
	
	while( std::cin >> a >> b ){
		int num1 = a;
		int num2 = b;
	
		if( a<b ){
			num2 = a;
			num1 = b;
		}
		int gcd;
		while( (gcd = num1%num2) != 0){
			num1 = num2;
			num2 = gcd;
		}
		gcd = num2;
		int lcm = a / gcd * b;
		std::cout << gcd <<" "<< lcm << "\n";
	}
	
	return 0;
}