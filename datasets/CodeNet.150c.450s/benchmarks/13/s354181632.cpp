#include <iostream>
#include <string>

int main(int argc, char const* argv[])
{
	std::string s;
	std::string p;
	int p_str_size;

	std::cin >> s >> p;
	std::string s2 = s + s;
	p_str_size = p.size();

	for (size_t i = 0; i < s2.size() - p_str_size; i++)
		if(s2.compare(i, p_str_size, p) == 0)
		{
			std::cout << "Yes" << std::endl;
			return 0;
		}

	std::cout << "No" << std::endl;
	return 0;
}