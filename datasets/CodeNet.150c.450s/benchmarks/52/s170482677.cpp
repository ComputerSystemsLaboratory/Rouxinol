#include <iostream>
#include <vector>

int main(){

	std::vector<int> vehicle_order;
	int input_data;

	while(std::cin >> input_data){
		if(input_data == 0){
			std::cout << vehicle_order.back() << std::endl;
			vehicle_order.pop_back();
		}else{
			vehicle_order.push_back(input_data);
	}
	}

	return 0;
}