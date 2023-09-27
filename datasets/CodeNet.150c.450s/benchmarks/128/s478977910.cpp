#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>

int main(){
	std::string str;

	std::cin >> str;

	std::reverse_copy(str.begin(), str.end(),
		std::ostream_iterator<char>(std::cout,""));
  	std::cout << std::endl;
  	return 0;
}