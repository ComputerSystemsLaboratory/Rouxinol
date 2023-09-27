#include<iostream>
#include<string>
#include<vector>
struct data_set
{
	std::string str;
	int appearance, length;
	data_set(const std::string&_str)
	{
		str = _str;
		for (auto&i : str)
		{
			if ('A' <= i && i <= 'Z')
			{
				i += 'a' - 'A';
			}
		}
		appearance = 1;
		length = static_cast<int>(str.length());
	}
};
int main()
{
	std::vector<data_set>data_sets;
	std::string word;
	std::cin >> word;
	data_sets.push_back(data_set(word));
	while (std::cin >> word)
	{
		bool new_word = true;
		for (auto&i : data_sets)
		{
			new_word &= i.str != data_set(word).str;
			if (!new_word)
			{
				i.appearance++;
				break;
			}
		}
		if (new_word)
		{
			data_sets.push_back(data_set(word));
		}
	}
	int mode = 0, longest = 0, mode_i, longest_i;
	for (int i = 0; i < data_sets.size(); i++)
	{
		if (mode < data_sets[i].appearance)
		{
			mode = data_sets[i].appearance;
			mode_i = i;
		}
		if (longest < data_sets[i].length)
		{
			longest = data_sets[i].length;
			longest_i = i;
		}
	}
	std::cout << data_sets[mode_i].str << ' ' << data_sets[longest_i].str << std::endl;
	return 0;
}
