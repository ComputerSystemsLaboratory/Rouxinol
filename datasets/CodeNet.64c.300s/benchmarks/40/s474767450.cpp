#include <iostream>
#include <cctype>

int main() {
	char str[1200];
	int str_size;
	std::cin.getline(str, sizeof(str));
	str_size = sizeof(str) / sizeof(str[0]);

	for(int i=0; i<str_size; i++){
		if(isupper(str[i])){
			str[i] = tolower(str[i]);
		}
		else if(islower(str[i])){
			str[i] = toupper(str[i]);
		}
	}

	std::cout << str << std::endl;
}