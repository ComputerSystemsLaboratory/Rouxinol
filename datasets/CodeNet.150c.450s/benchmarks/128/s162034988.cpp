#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const* argv[])
{
	std::string s;
	std::cin >> s;
	std::reverse(s.begin(),s.end());
	std::cout << s << std::endl;
	return 0;
}