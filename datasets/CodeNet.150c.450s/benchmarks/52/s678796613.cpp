#include <iostream>
#include <stack>

int main(void){
	std::stack<int> st;
	int num;

	while(std::cin >> num){
		if(num != 0){
			st.push(num);
		}else{
			std::cout << st.top() << std::endl;
			st.pop();
		}
	}
	return 0;
}