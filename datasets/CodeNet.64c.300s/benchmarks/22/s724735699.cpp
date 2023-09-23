#include <iostream>

bool isTriangle(int a, int b, int c){
	if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)	return true;
	else return false;
}

int main(){
	int num_d;
	std::cin >> num_d;
	
	for(int i = 0;i < num_d; ++i){
		int a, b, c;
		std::cin >> a >> b >> c;
		
		if(isTriangle(a, b, c)){
			std::cout << "YES" << std::endl;
		}
		else{
			std::cout << "NO" << std::endl;
		}
	}
	return 0;
}