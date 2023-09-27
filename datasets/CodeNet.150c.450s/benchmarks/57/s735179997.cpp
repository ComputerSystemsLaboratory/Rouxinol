#include <iostream>

int main(int argc, char **argv){
	int a = 0;
	int b = 0;
	char op = 0;

	while(std::cin >> a >> op >> b, op != '?'){
		switch(op){
			case '+':
				std::cout << a + b << std::endl;
				break;
			case '-':
				std::cout << a - b << std::endl;
				break;
			case '*':
				std::cout << a * b << std::endl;
				break;
			case '/':
				std::cout << a / b << std::endl;
				break;
			default:
				break;
		}
	}
	return 0;
}