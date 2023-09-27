#include <iostream>
#include <vector>

int main(){
	int dataNum,x;
	std::vector<int> number;
	
	std::cin >> dataNum;
	//input
	for(int i=0; i<dataNum; ++i){
		std::cin >> x;
		number.push_back(x);
	}
	
	std::vector<long long int> ans_num(21,0); //number of answer before now step
	
	ans_num[number[0]] = 1; //initial value
	
	for(int i=1; i<dataNum-1; ++i){
		std::vector<long long int> buf(21,0); //number of answer now step
		for(int j=0; j<21; ++j){
			if(ans_num[j] != 0){
				//plus
				if((j+number[i]) <= 20){
					buf[j+number[i]] += ans_num[j];
				}
				//minus
				if((j-number[i]) >= 0){
					buf[j-number[i]] += ans_num[j];
				}
			}
		}
		//move now step to before step
		ans_num.assign(buf.begin(), buf.end());
	}
	//output
	std::cout << ans_num[number[dataNum-1]] << std::endl;
}