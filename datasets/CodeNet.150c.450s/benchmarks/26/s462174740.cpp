#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std::cin >> b;

	const char* s = 0;
	if ( a > b )
		s = ">";
	else if ( a < b )
		s = "<";
	else
		s = "==";
	std::cout << "a " << s << " b" << std::endl;

	return 0;
}