#include <iostream>
#include <cmath>
#include <string>

int main (){
	int a,b;
	std::string s;
	std::cin >> a >> b;
	
	if (a > b)
		s = ">";
	else if (a < b)
		s = "<";
	else
		s = "==";

	std::cout << "a " << s << " b" << std::endl;
	return 0;
}

