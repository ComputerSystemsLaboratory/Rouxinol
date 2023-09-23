#include <iostream>
#include <iomanip>

int main(int argc, char const* argv[]) {
	int a,b,ans;
	char op;
	std::cin >> a >> op >> b;
	while (op!='?') {
		switch (op) {
			case '+':
				ans = a + b;
				break;
			case '-':
				ans = a - b;
				break;
			case '*':
				ans = a * b;
				break;
			case '/':
				ans = a / b;
				break;
			default:
				ans = 0;
				break;
		}
		std::cout << ans << std::endl;
		std::cin >> a >> op >> b;
	}

	return 0;
}