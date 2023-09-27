#include <iostream>
#include <stack>

int main() {

	std::stack<int> st;
	int inp;//input

	while (std::cin >> inp)
	{
		if (inp == 0) {//output data and pop data
			std::cout << st.top() << std::endl;
			st.pop();
		}
		else {//push data
			st.push(inp);
		}
	}

	return 0;
}