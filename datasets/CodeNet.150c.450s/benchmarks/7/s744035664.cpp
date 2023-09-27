#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

int main(){
	std::vector<int> v;
	for (auto i = 0; i < 10; ++i){
		int t;
		std::cin >> t;
		v.push_back(t);
	}
	std::sort(v.begin(), v.end(), std::greater<int>());
	for (auto i = 0; i < 3; ++i){
		std::cout << v[i] << std::endl;
	}

	return 0;
}