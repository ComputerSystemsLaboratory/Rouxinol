#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <set>
#include <cmath>
#include <map>


int main(int,char**){
	int n;
	char from,to;
	char in;
	while(std::cin >> n){
		if(!n) break;
		std::map<char,char> map;
		while(n--){
			std::cin >> from >> to;
			map[from] = to;
		}
		std::cin >> n;
		while(n--){
			std::cin >> in;
			if(map[in]) std::cout << map[in];
			else std::cout << in;
		}
		std::cout << std::endl;
	}
	return 0;
}