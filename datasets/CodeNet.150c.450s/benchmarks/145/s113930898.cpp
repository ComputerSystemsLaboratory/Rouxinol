#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, int> count_map;
	std::string str{};
	int max_length = 0;
	std::string max_str{};
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
	}

	int max_count = 0;
	std::string max_string{};
	for (auto counter : count_map)
	{
		if (max_count < counter.second)
		{
			max_count = counter.second;
			max_string = counter.first;
		}
	}

	std::cout << max_string << " " << max_str << std::endl;
	return 0;
}