#include <iostream>
#include <vector>
#include <string>
#include<sstream>
#include <stack>
namespace stoi{
	int stoi(std::string str){
		int num;
		std::stringstream ss;
		ss << str;
		ss >> num;

		return num;
	}
}

int main(){

	std::string str;
	int count = 0;
	std::stack<int> num;
	while (std::cin >> str) {
		if (str == "+") {
			int a = num.top(); num.pop();
			int b = num.top(); num.pop();
			num.push(a + b);
		}
		else if (str == "-") {
			int b = num.top(); num.pop();
			int a = num.top(); num.pop();
			num.push(a - b);
		}
		else if (str == "*") {
			int a = num.top(); num.pop();
			int b = num.top(); num.pop();
			num.push(a * b);
		}
		else if (str == " ") {
		}
		else{
			num.push(stoi::stoi(str));

		}
	

	}

	std::cout<<num.top() << std::endl;

	return 0;
}