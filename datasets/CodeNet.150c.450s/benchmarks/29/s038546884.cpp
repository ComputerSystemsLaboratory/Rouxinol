#include <iostream>
#include <list>
#include <string>

int main() {
	std::list<int> list;
	int n;
	std::cin >> n;
	std::string command;
	for (int i = 0; i < n; i++) {
		std::cin >> command;
		if (command[0] == 'i') {
			int x;
			std::cin >> x;
			list.push_front(x);
		} else if (command[6] == 'F') {
			list.pop_front();
		} else if (command[6] == 'L') {
			list.pop_back();
		} else if (command[0] == 'd') {
			int x;
			std::cin >> x;
			for(auto i = list.begin(); i != list.end(); i++) {
				if (*i == x) {
					list.erase(i);
					break;
				}
			}
		}
	}

	auto i = list.begin();
	std::cout << *i;
	for(i++; i != list.end(); i++) {
		std::cout << " " << *i;
	}
	std::cout << std::endl;
	return 0;
}