#include <iostream>
#include <vector>

int main(void){
	int num;
	std::cin >> num;
	std::vector<int> inputNums;

	int number;
	for(int i = 0; i < num; ++i){
		std::cin >> number;
		inputNums.push_back(number);
	}

	std::vector<long int> countCells(21,0); //init answer vector
	countCells[inputNums[0]] = 1; //add first number
	
	std::vector<long int> bufferCells(21,0); //for sum&dif answer buffer

	for(int j = 1; j < num - 1; ++j){
		for(int k = 0; k <= 20; ++k){
			if(k < inputNums[j]){ //only dif
				bufferCells[k] = countCells[k + inputNums[j]];
			}else if(k > 20 - inputNums[j]){ //only sum
				bufferCells[k] = countCells[k - inputNums[j]];
			}else{ //dif & sum
				bufferCells[k] = countCells[k + inputNums[j]] + countCells[k - inputNums[j]];
			}
		}

		//renew countCells
		for(int l = 0; l <= 20; ++l){
			countCells[l] = bufferCells[l];
		}
	}

	std::cout << countCells[inputNums.back()] << std::endl;

	return 0;
}