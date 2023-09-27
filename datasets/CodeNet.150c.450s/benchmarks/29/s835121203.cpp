#include<list>
#include<iostream>
#include<string>
int main(void) {
	int n;
	std::cin >> n;
	std::list<int> List;
	std::string CommandInput;
	int KeyInput;
	for (int i = 0; i < n; ++i) {		
		std::cin >> CommandInput;		
		if (CommandInput == "insert") {
			std::cin >>  KeyInput;
			List.push_front(KeyInput);
		}
		else if (CommandInput == "delete") {
			std::cin >> KeyInput;
			for (std::list<int>::iterator itr = List.begin(); itr != List.end(); ++itr) {
				if (*itr == KeyInput) {
					itr = List.erase(itr);
					break;
				}
			}
		}
		else if (CommandInput == "deleteFirst") {
			List.pop_front();
		}
		else if (CommandInput == "deleteLast") {
			List.pop_back();
		}
	}
	std::list<int>::iterator enditr = List.end();
	enditr--;		
	for (std::list<int>::iterator itr = List.begin(); itr != List.end(); ++itr) {
		if (itr != enditr) {
			std::cout << *itr << " ";
		}
		else {
			std::cout << *itr << std::endl;
		}
			}
	//system("pause");
	return 0;
}