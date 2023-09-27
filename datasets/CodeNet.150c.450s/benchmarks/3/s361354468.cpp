#include <iostream>
#include <cstdio>

int main(void)
{
	char str[1001] = {};
	char tempStr[1001] = {};
	std::cin >> str;
	int q;
	std::cin >> q;
	char in[8] = {};
	for (int i = 0; i < q; i++)
	{
		std::cin >> in;
		if (in[0] == 'r' 
			&& in[1] == 'e' 
			&& in[2] == 'p' 
			&& in[3] == 'l' 
			&& in[4] == 'a' 
			&& in[5] == 'c'
			&& in[6] == 'e'
			&& in[7] == '\0')
		{
			int a, b;
			std::cin >> a >> b;
			std::cin >> tempStr;
			for (int i = 0; i < b - a + 1; i++)
			{
				str[a + i] = tempStr[i];
			}
		}
		else if (in[0] == 'r'
			&& in[1] == 'e'
			&& in[2] == 'v'
			&& in[3] == 'e'
			&& in[4] == 'r'
			&& in[5] == 's'
			&& in[6] == 'e'
			&& in[7] == '\0')
		{
			int a, b;
			std::cin >> a >> b;
			for (int i = 0; i < b - a + 1; i++)
			{
				tempStr[i] = str[a + i];
			}
			for (int i = 0; i < b - a + 1; i++)
			{
				str[a + i] = tempStr[b - a - i];
			}
		}
		else if (in[0] == 'p'
			&& in[1] == 'r'
			&& in[2] == 'i'
			&& in[3] == 'n'
			&& in[4] == 't'
			&& in[5] == '\0')
		{
			int a, b;
			std::cin >> a >> b;
			for (int i = a; i <= b; i++)
			{
				std::cout << str[i];
			}
			std::cout << '\n';
		}
	}
	return 0;
}