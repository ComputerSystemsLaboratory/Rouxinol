#include <iostream>
#include <string>
using namespace std;
int main()
{
	std::string line;
	std::getline( std::cin, line );

	std::string::size_type p = 0,
						   s = line.size();
	int d = 'A' - 'a';
	char c;
	while( p < s )
	{
		c = line.at(p);

		if('a' <= c && c <= 'z')
			c = c + d;
		else if('A' <= c && c <= 'Z')
			c = c - d;

		std::cout << c;
		++p;
	}

	std::cout << "\n";

	return 0;
}