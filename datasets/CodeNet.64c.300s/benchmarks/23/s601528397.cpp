# include <iostream>

int area(int a, int b) {
	return a * b;
}
int surface(int a, int b) {
	return 2 * a + 2 * b;
}

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << area(a, b) << " " << surface(a, b) << std::endl;
	return 0;
}