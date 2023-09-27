#include <iostream>

int a,b;
int main(){
	while(std::cin >> a >> b){
		if(a<b) std::cout << "a < b" << std::endl;
		else if(a>b) std::cout << "a > b" << std::endl;
		else std::cout << "a == b" << std::endl;
	}
}
