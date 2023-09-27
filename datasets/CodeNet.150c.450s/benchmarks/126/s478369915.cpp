#include <iostream>
#include <vector>

int main(void){
	int num_row,num_col;

	while(std::cin >> num_row >> num_col, num_row != 0 && num_col != 0){
		//make street
		std::vector<int> street(num_row * num_col, 1);
		
		//make stop
		int stop_num,row,col;
		std::cin >> stop_num;
		for(int i = 0; i < stop_num; ++i){
			std::cin >> row >> col;
			street[num_row * (col - 1) + (row - 1)] = 0;
		}
	
		//calc
		int lRoad,uRoad; //left road, under road
		for(int j = 0; j < num_col; ++j){
			for(int k = 0; k < num_row; ++k){
				if(j + k != 0){
					if(street[j*num_row + k] != 0){
						lRoad = k == 0 ? 0 : street[j*num_row + k - 1];
						uRoad = j == 0 ? 0 : street[(j - 1)*num_row + k];
						street[j*num_row + k] = lRoad + uRoad;
					}
				}
			}
		}
	
		std::cout << street.back() << std::endl;
	}
	return 0;
}