#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <algorithm>

int main(){
	int num;

	while(std::cin >> num){
		//input
		std::vector<int> factor;
		for(int i = 0; i < num; ++i){
			int buf;
			std::cin >> buf;
			factor.push_back(buf);
		}

		std::array<long int, 21> count = {0}; //0~20
	
		for(auto fct_itr = factor.begin(); fct_itr != factor.end(); ++fct_itr){
			std::array<long int, 21> tmp_count = {0};
			int cnt_number = 0;
			if(fct_itr == factor.begin()){
				tmp_count[*fct_itr] = 1;
			}else{
				for(auto cnt_itr = count.begin(); cnt_itr != count.end(); ++cnt_itr){
					if(cnt_number >= *fct_itr){
						tmp_count[cnt_number - *fct_itr] += *cnt_itr;
					}
					if(cnt_number + *fct_itr <= 20){
						tmp_count[cnt_number + *fct_itr] += *cnt_itr;
					}
					cnt_number++;
				}
			}
		std::copy(tmp_count.begin(), tmp_count.end(), count.begin());

		}
		
		std::cout << count.front() << std::endl;
		std::vector<int>().swap(factor);
	}

	return 0;
}