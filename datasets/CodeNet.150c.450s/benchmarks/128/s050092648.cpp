#include <iostream>
#include <string>
#include <algorithm>

//answer3 function
void display(const char& ch) {
	std::cout << ch;
}

int main(){
	std::string str;
	std::cin >> str;
	
	//answer1
	//for(auto it = str.crbegin(); it != str.crend(); ++it){
	//	std::cout << *it;
	//}
	
	
	//answer2
	std::for_each(str.crbegin(), str.crend(), [](const char& ch){ std::cout << ch; });
	
	//answer3
	//std::for_each(str.crbegin(), str.crend(), display);
	
	std::cout << std::endl;
	
	return 0;
}