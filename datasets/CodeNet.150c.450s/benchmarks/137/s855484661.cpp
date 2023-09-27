#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>

void insert( std::set<std::string> &arr) {
	std::string str;
	std::cin >> str;
	arr.insert(str);
}

void serch( std::set<std::string> &arr) {
	std::string str;
	std::cin >> str;
	if (arr.find(str) != arr.end()) std::cout << "yes" << std::endl;
	else std::cout << "no" << std::endl;
}




int main(void)
{
	typedef  std::map<std::string, void(*)(std::set<std::string>&)> map_type;
	map_type funcs;
	funcs.insert(std::make_pair(std::string("insert"),insert));
	funcs.insert(std::make_pair(std::string("find"), serch));

	int n;
	std::set<std::string> arr;
	std::cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		std::string com;
		std::cin >> com;
		funcs.find(com)->second(arr);
	}
	return 0;
}