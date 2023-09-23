#include<iostream>
#include<stdio.h>
int main()
{
	int a, b;
	char op = 0;
	int ans;
	while (op != '?'){
		std::cin >> a;
		std::cin >> op;
		std::cin >> b;
		switch(op){
		case '+':
			ans = a + b;
			std::cout << ans << "\n";
			break;
		case '-':
			ans = a - b;
			std::cout << ans << "\n";
			break;
		case '*':
			ans = a*b;
			std::cout << ans << "\n";
			break;
		case '/':
			ans = a / b;
			std::cout << ans << "\n";
		default:
			break;
		}
	}
	return 0;
}