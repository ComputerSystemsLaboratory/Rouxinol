#include <iostream>
int main(){
	int a,b;
	char op;
	while(true){
		std::cin >> a >>op >> b;
		if(op == '?'){
			break;
    }else if(op == '+'){
		std::cout <<a + b<<std::endl;
	}else if(op == '-'){
		std::cout <<a - b<<std::endl; 
	}else if(op == '*'){
		std::cout <<a * b<<std::endl;
	}else if(op == '/'){
		std::cout <<a / b<<std::endl;
	}}}