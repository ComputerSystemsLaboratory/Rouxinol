#include <iostream>
#include <stack>
#include <string>

#define INPUT_FROM_FILE (0)

#if INPUT_FROM_FILE
#include <fstream>
#endif

#if INPUT_FROM_FILE
#define IS ifs
#else
#define IS std::cin
#endif

int calc(int operand0, int operand1, std::string op){
	if(op == "+"){
		return operand0 + operand1;
	}
	else if(op == "-"){
		return operand0 - operand1;
	}
	else if(op == "*"){
		return operand0 * operand1;
	}
}

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs = std::ifstream("test.txt");
#endif
	std::stack<int> stack;
	std::string str;

	while(IS >> str){
		if(str == "+" || str == "-" || str == "*"){
			int operand0 = 0;
			int operand1 = 0;

			operand1 = stack.top();
			stack.pop();
			operand0 = stack.top();
			stack.pop();
			stack.push(calc(operand0, operand1, str));
		}
		else{
			stack.push(std::stoi(str));
		}
	}

	std::cout << stack.top() << std::endl;
	return 0;
}