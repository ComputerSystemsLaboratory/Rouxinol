#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, int> count_map;
	std::string str{};
	int max_length = 0;
	std::string max_str{};
	int hist_max_count = 0;
	std::string hist_max_str{};

	while (std::cin >> str)
	{
		if (count_map.count(str) == 0)
		{
			count_map[str] = 1;
		}
		else
		{
			count_map[str]++;
		}

		if (max_length < str.length())
		{
			max_length = str.length();
			max_str = str;
		}

		if (hist_max_count < count_map[str])
		{
			hist_max_count = count_map[str];
			hist_max_str = str;
		}
	}

	std::cout << hist_max_str << " " << max_str << std::endl;
	return 0;
}