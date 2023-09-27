#include <iostream>
#include <vector>

int main(){
	int count;
	std::cin >> count;
	
	std::vector<int> seq_number;
	seq_number.resize(count);
	for(int i=0; i<count; ++i){
		std::cin >> seq_number[i];
	}
	
	std::vector<std::vector<long int>> table(count, std::vector<long int>(21,0));
	table[0][seq_number[0]] = 1;
	
	for(int i=1; i<count-1; ++i){
		for(int j=0; j<21; ++j){
			if(j + seq_number[i] <= 20){
				table[i][j+seq_number[i]] += table[i-1][j]; 
			}
			if(j - seq_number[i] >= 0){
				table[i][j-seq_number[i]] += table[i-1][j];
			}
		}
	}
	
	std::cout << table[count-2][seq_number.back()] << std::endl;
	
	
	return 0;
}