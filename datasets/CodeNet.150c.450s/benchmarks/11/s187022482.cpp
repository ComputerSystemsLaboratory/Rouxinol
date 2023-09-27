#include <math.h>
#include <iostream>
#include <string.h>

int main(){
	int i = 0;
	std::cin >> i;

	char type[2];
	int num = 0;
	int c = 0;
	bool card[52] = {};
	for (int n = 0; n<52; n++)card[n] = false;
	for (int n = 0; n < i; n++){
		std::cin >> type >> num;
		int t;
		if (!strcmp(type, "S"))t = 0;
		if (!strcmp(type, "H"))t = 1;
		if (!strcmp(type, "C"))t = 2;
		if (!strcmp(type, "D"))t = 3;

		card[t * 13 + num - 1] = true;

	}
	for (int n = 0; n < 52; n++){

		if (card[n] == false){
			int t = floor(n / 13);
			if (t == 0)std::cout << "S " << (n % 13) + 1 << std::endl;
			if (t == 1)std::cout << "H " << (n % 13) + 1 << std::endl;
			if (t == 2)std::cout << "C " << (n % 13) + 1 << std::endl;
			if (t == 3)std::cout << "D " << (n % 13) + 1 << std::endl;

		}
	}
	return 0;
}