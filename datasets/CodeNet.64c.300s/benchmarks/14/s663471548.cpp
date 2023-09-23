#include <iostream>
#include <string>

int main() {
	int a, b;
	auto mark = ">";
	std::cin >> a >> b;
	if (a > b)
	{
		mark = ">";
	}
	else if(a < b)
	{
		mark = "<";
	}
	else mark = "==";
	std::cout << "a" << " " << mark << " " << "b" << std::endl;
	return 0;
}