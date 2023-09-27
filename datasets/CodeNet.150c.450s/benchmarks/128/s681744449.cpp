#include <iostream>
#include<algorithm>
#include<cmath>
#include <string>
#include <vector>
typedef unsigned long long ULL;

 int main (){
	 std::string str;

	 std::cin >> str;

	 for (int i = 0; i < str.size(); ++i) {
		 std::cout << str[str.size() - 1 - i];
	 }
	 std::cout << "" << std::endl;
	 return 0;
}
