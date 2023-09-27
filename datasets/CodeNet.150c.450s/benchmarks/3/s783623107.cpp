#include<iostream>
#include<string>
void PRINT(std::string str) {
	int a, b;
	std::cin >> a >> b;
	str = str.substr(a, b - a + 1);
	std::cout << str << std::endl;
}
void REVERSE(std::string  &str) {
	int a, b;
	std::cin >> a >> b;
	std::string CopySTR = str;
	for (unsigned int i =0 ; i <= b-a; ++i) {
		str[a+i] = CopySTR[b - i];
	}
}
void REPLACE(std::string &str) {
	int a, b;
	std::string q;
	std::cin >> a >> b >> q;
	str = str.erase(a, b - a + 1);
	str = str.insert(a, q);
}
int main(void) {
	std::string str;
	std::cin >> str;
	int NumberCOMAND;
	std::cin >> NumberCOMAND;
	for (int i = 0; i < NumberCOMAND; ++i) {
		std::string COMAND;
		std::cin >> COMAND;
		if (COMAND == "print") {
			PRINT(str);
					}
		else if (COMAND == "reverse") {
			REVERSE(str);
		//	std::cout << str << std::endl;
		}
		else if (COMAND == "replace") {
			REPLACE(str);
			//std::cout << str << std::endl;
		}
	}
		//system("pause");
	return 0;
}