#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
	int r,c;
	std::cin >> r >> c;
	std::vector<std::vector<int>> table(r+1,std::vector<int>(c+1,0));
	for(int i = 0 ; i < r ; i ++){
		for(int j = 0 ; j < c ; j ++){
			std::cin >>table[i][j] ;
		}
	}
	for(int i = 0 ; i < r ; i ++){
		for(int j = 0 ; j < c ; j ++){
			table[i][c] += table[i][j];
			table[r][j] += table[i][j];
		}
		table[r][c] += table[i][c];
	}
	for(int i = 0 ; i <= r ; i ++){
		for(int j = 0 ; j < c ; j ++){
			std::cout << table[i][j] << " ";
		}
		std::cout << table[i][c] << std::endl;
	}
	return 0;
}