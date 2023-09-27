# include <iostream>
# include <stack>
# include <iomanip>

int main() {
	int n;
	std::stack<int> s;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		std::cin >> input;
		s.push(input);
	}
	for (int i = 0; i < n; i++) {
		if( i != n-1)
			std::cout << s.top() << " ";
		if (i == n - 1)
			std::cout << s.top();
		s.pop();
	}
        std::cout << std::endl; 
	return 0;
}