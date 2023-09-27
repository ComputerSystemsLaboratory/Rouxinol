#include <iostream>
int main(){
	int list[30];
	for (int i = 0; i < 30; i++) {
		list[i] = i + 1;
	}
	int submit[28];
	for (int i = 0; i < 28; i++) {
		std::cin >> submit[i];
		list[submit[i]-1] = 0;
	}

	for (int i = 0; i < 30; i++) {
		if (list[i] != 0) {
			std::cout << list[i] << std::endl;
		}
	}
}