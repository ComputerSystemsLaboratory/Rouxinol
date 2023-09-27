#include <iostream>
#include <vector>
#include <algorithm>


int main(){
	int count_num;
	std::cin >> count_num;
	
	std::vector<int> fig;
	fig.resize(count_num);
	for(int i=0; i<count_num; ++i){
		std::cin >> fig[i];
	}
	
	std::vector<long int> ans_number;
	ans_number.resize(21);
	ans_number[fig[0]] = 1;
	for(int i=1; i<count_num-1; ++i){
		std::vector<long int> number;
		number.resize(21);
		
		for(int j=0; j<21; ++j){
			if(ans_number[j] != 0){
				if(j + fig[i] <= 20)
					number[j+fig[i]] += ans_number[j];
				if(j - fig[i] >= 0)
					number[j-fig[i]] += ans_number[j];
			}
		}
		
		std::copy(number.begin(), number.end(), ans_number.begin());
	}
	
	std::cout << ans_number[fig.back()] << std::endl;
	return 0;
}