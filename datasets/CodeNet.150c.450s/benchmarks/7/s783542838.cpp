#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	
	//use vector
	std::vector<int> height(10); // create height[10]
	
	// input
	for(int i = 0; i < 10; ++i){
		std::cin >> height[i];
	}
	
	//sort
	std::sort(height.begin(), height.end(), std::greater<int>());
	
	//output
	for(int i = 0; i < 3; ++i){
		std::cout << height[i] << std::endl;
	}
	
	return 0;
}