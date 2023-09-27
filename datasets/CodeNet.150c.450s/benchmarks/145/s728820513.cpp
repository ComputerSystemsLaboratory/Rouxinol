#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdint>

typedef std::map<std::string, std::uint32_t> OccurenceWordMap;

class compare_second {
		typedef OccurenceWordMap::value_type value_type;
	public:
		bool operator()(value_type const& lhs, value_type const& rhs) const
		{
			return lhs.second < rhs.second;
		}
};

class compare_length {
		typedef std::string value_type;
	public:
		bool operator()(value_type const& lhs, value_type const& rhs) const
		{
			return lhs.length() < rhs.length();
		}
};

int main()
{
	std::string input_text;
	std::getline(std::cin, input_text);
	typedef std::vector<std::string> StringVec;
	StringVec word_vec;
	std::string::size_type pos1 = 0;
	std::string::size_type pos2;
	while ((pos2 = input_text.find(' ', pos1)) != std::string::npos) {
		word_vec.push_back(input_text.substr(pos1, pos2 - pos1));
		pos1 = pos2 + 1;
	}
	word_vec.push_back(input_text.substr(pos1, input_text.size() - pos1));
	OccurenceWordMap ow_map;
	for (std::string const& word : word_vec) {
		auto i = ow_map.lower_bound(word);
		if (i != ow_map.end() && !(ow_map.key_comp()(word, i->first))) {
			++i->second;
		}
		else {
			ow_map.insert(std::make_pair(word, 0));
		}
	}
	std::cout << std::max_element(ow_map.begin(), ow_map.end(), compare_second())->first << ' '
			  << *std::max_element(word_vec.begin(), word_vec.end(),  compare_length()) << std::endl;
	return 0;
}