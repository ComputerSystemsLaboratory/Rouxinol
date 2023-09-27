#include <iostream>
#include <stack>

int main(void){
	std::stack<int> s;int in;
	while(std::cin>>in){
		if(!in){
			std::cout << s.top() << std::endl;
			s.pop();
		}else{
			s.push(in);
		}
	}
	return 0;
}