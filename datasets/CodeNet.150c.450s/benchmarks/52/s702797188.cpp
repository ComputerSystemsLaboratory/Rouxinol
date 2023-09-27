#include <iostream>
#include <stack>

int main(){
	std::stack<int> railroad;
	
	int incar;
	while(std::cin >> incar){
		if(incar != 0){
			railroad.push(incar);
		}else{
			std::cout << railroad.top() << std::endl;
			railroad.pop();
		}
	}
	return 0;
}