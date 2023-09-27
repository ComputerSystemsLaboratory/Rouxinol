#include <iostream>
#include <map>
#include <algorithm>
int main()
{
	typedef std::map<std::string, int>	simap;
	typedef std::pair<std::string, int> 	sipair;
	simap 		words; 
	std::string 	input;

	while (std::cin >> input) 
		++words[input]; 
	
	auto result  = std::minmax_element(words.begin(), words.end(), [](const sipair & a, const sipair & b) { return a.first.length() < b.first.length(); });
	auto result2 = std::minmax_element(words.begin(), words.end(), [](const sipair & a, const sipair & b) { return a.second < b.second; });

	std::cout << result2.second->first << ' ' << result.second->first << std::endl;
}