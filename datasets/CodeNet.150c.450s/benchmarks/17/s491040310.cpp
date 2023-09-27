#include <iostream>
#include <array>
#include <algorithm>

int main(){
	std::array<int, 5> num;
	
	while(std::cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4]){
		sort(num.begin(), num.end(), std::greater<int>());
		std::cout << num[0] <<" "<< num[1] << " " << num[2] <<" "<< num[3] << " " << num[4] << std::endl;
		}
	return 0;
}