#include <iostream>
#include <stack>

int main(){
	int a;
	std::stack<int> stack;

	while(std::cin >> a){
		if(a > 0){
			stack.push(a);		//push
		} else{
			std::cout << stack.top() << std::endl;	//表示
			stack.pop();		//pop
		}
	}

	return 0;
}
