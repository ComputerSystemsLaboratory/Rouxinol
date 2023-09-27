#include <iostream>
#include <stack>

int main(){
	std::stack<int> st;

	int num = 0;
	while(std::cin >> num){
		if(num == 0){
			std::cout << st.top() << std::endl;
			st.pop();
		} else {
			st.push(num);
		}
	}
}