#include <iostream>
#include <vector>

int main(void){
	std::vector<int> trainID; //list of inputted trainID
	int tmp;

	std::cin >> tmp; //input trainID
	trainID.push_back(tmp); //add trainID

	while(std::cin >> tmp){  //input trainID or 0
		if(tmp == 0){
			std::cout << trainID.back() << std::endl; //output last trainID
			trainID.pop_back(); //delete outputted trainID
		}else{
			trainID.push_back(tmp); //add trainID
		}
	}

	return 0;
}