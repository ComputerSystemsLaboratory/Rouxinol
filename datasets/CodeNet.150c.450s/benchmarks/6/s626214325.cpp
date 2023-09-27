#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

	int a, b, c;
	std::string answer = "No";

	std::cin >> a >> b >> c;

	if (a<b&&b<c) {
		answer = "Yes";
	}

	std::cout << answer << std::endl;

	return 0;
}