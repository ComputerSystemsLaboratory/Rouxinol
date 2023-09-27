#include<iostream>

int main()
{
	int a, b;
	char op;
	
	while(std::cin >> a >> op >> b) {
		if(op == '?') break;

		int answer;
		if(op == '+') {
			answer = a + b;
		} else if(op == '-') {
			answer = a - b;
		} else if(op == '*') {
			answer = a * b;
		} else if(op == '/') {
			answer = a / b;
		}
		std::cout << answer << '\n';
	}

	return 0;
}
		