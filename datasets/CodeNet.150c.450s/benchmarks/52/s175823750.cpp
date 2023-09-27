#include <iostream>
#include <stack>

int main(){
	std::stack<int> trains;
	int in;

	while(std::cin >> in){
		if(in == 0){
			std::cout << trains.top() << std::endl;
			trains.pop();
		}
		else
			trains.push(in);
	}
	return 0;
}