
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
int main(){
	std::vector<int>a;
	for (int i = 0; i < 3; ++i){
		int t;
		std::cin >> t;
		a.push_back(t);
	}
	std::sort(a.begin(), a.end());
	std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
}