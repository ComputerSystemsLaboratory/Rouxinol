# include <iostream>
# include <iomanip>

int main() {
	int a, b;
	char ch;
	bool b_loop = true;
	std::cout << std::setprecision(10);
	std::cout << std::fixed;
	while (b_loop) {
		std::cin >> a >> ch >> b;
		switch (ch) {
		case '?':
			b_loop = false;
			break;
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
		case '%':
			std::cout << a % b << std::endl;
			break;
		}
	}
	return 0;
}