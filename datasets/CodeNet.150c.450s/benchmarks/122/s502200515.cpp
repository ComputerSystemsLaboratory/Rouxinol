#include<iostream>
#include<queue>
#include<algorithm>
#include<string>

int main() {
	std::string str;
	std::priority_queue<int> v;

	std::cin >> str;

	while (str != "end") {
		if (str == "insert") {
			int num;
			std::cin >> num;
			v.push(num);
		} else {
			std::cout << v.top() << std::endl;
			v.pop();
		}
		std::cin >> str;
	}

	return 0;
}