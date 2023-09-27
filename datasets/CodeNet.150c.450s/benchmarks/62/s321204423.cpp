#include<iostream>
#include<algorithm>
#include <array>
int main(void){
		std::array<int, 3> num;
		std::cin >> num[0] >> num[1] >> num[2];

		std::sort(num.begin(),num.end());

		std::cout << num[0] <<" "<< num[1] <<" "<< num[2] << std::endl;
		return 0;
}