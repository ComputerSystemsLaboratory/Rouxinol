#include <iostream>
#include <stack>

int main(){
	std::stack<int> rail;
	
	int x;
	while(std::cin >> x){
		//car exit
		if(x == 0){
			std::cout << rail.top() << std::endl;
			rail.pop();
		}
		//car enter
		else{
			rail.push(x);
		}
	}
	
}