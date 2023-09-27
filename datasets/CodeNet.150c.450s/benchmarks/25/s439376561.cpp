#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	std::string str;
	int count[26] = { 0 };
	while (std::getline(std::cin, str))
	{
		for (char c : str)
		{
			int idx = -1;
			if (c >= 'a' && c <= 'z')
			{
				idx = c - 'a';
			}
			else if (c >= 'A' && c <= 'Z')
			{
				idx = c - 'A';
			}

			if (idx >= 0)
			{
				count[idx] += 1;
			}
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		std::cout << (char)('a' + i) << " : " << count[i] << std::endl;
	}

	return 0;
}
