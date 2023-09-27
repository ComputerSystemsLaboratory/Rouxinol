#include<iostream>
#include<string>
#include<iterator>

std::string reverse_str(std::string str);

int main()
{
	std::string str;
	while (std::cin >> str)
	{
		str = reverse_str(str);
		std::cout << str << std::endl;
	}
	return 0;
}

std::string reverse_str(std::string str)
{
	std::string str_ans;
	for (unsigned long i = 1; i <= str.size(); ++i)
	{
		std::string::iterator it = std::prev(end(str), i);
		str_ans += *it;
	}
	return str_ans;
}