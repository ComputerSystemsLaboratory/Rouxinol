#include <iostream>
#include <stack>

int main(){
	std::stack<int> garage;
	int vehicle_num; //railroad car
	
	while(std::cin >> vehicle_num){
		if(vehicle_num != 0) garage.push(vehicle_num);
		else{
			std::cout << garage.top() << std::endl;
			garage.pop();
		}
	}
	
	return 0;
}