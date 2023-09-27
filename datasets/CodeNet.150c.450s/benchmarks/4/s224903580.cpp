#include <iostream>

int main()
{
	int a, b, c;
	char s;
	for (;;) {
		std::cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		else if (a == -1 || b == -1) s = 'F';
		else if (a + b >= 80) s = 'A';
		else if (a + b >= 65) s = 'B';
		else if (a + b >= 50 || c >= 50) s = 'C';
		else if (a + b >= 30) s = 'D';
		else s = 'F';
		std::cout << s << '\n';
	}
}