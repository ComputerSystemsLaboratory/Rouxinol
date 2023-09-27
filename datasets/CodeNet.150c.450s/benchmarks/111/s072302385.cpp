#include <iostream>
#include <vector>

int main(){
std::vector<int> number;
	int inputNum,tmp;


	std::cin >> inputNum;

	for(int i = 0; i < inputNum; ++i){
		std::cin >> tmp;
		number.push_back(tmp);
	}

	std::vector<std::vector<long int>> vec(inputNum + 1, std::vector<long int>(21, 0));

	vec[0][number[0]] = 1;

	for(int i = 0; i < inputNum; ++i){
		for(int j = 0; j < 21; j++){
			if(vec[i][j] != 0){
				if(j + number[i + 1] <= 20){
					vec[i+1][j + number[i + 1]] += vec[i][j];
				}
				if(j - number[i + 1] >= 0){
					vec[i+1][j - number[i + 1]] += vec[i][j];
				}
			}
		}
	}

	std::cout << vec[inputNum - 2][number[inputNum - 1]] << std::endl;

	return 0;
}