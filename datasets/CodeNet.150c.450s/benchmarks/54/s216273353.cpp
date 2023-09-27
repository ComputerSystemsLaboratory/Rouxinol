#include <iostream>
#include <string>

const std::string END_OF_TEXT = "END_OF_TEXT";

int main(void)
{
	std::string w, t_w;
	std::cin >> w;
	int matchWords = 0;
	while (std::cin >> t_w)
	{
		if (t_w == END_OF_TEXT)
		{
			break;
		}
		if (t_w[0] != '"' || t_w[0] != '\'')
		{
			if (w.size() != t_w.size())
			{
				continue;
			}
		}
		for (int i = 0; i + w.size() <= t_w.size(); i++)
		{
			int matchChars = 0;
			while (matchChars < w.size() 
				&& tolower(w[matchChars]) == tolower(t_w[i]))
			{
				matchChars++;
				i++;
			}
			if (matchChars != w.size())
			{
				matchChars = 0;
			}
			else
			{
				matchWords++;
			}
		}
	}
	std::cout << matchWords << '\n';
	return 0;
}