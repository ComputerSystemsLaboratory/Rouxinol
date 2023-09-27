#include <iostream>
#include <stack>

int main(){

	std::stack<int> train;

	int buf;

	while(std::cin >> buf){

		if(buf == 0){

			std::cout << train.top() << std::endl;
			train.pop();

		}else{

			train.push(buf);

		}
	
	}

	return 0;
}	