#include<iostream>
#include<string>
int main(void) {
		while (1) {
		std::string StringCalculate ;
		std::cin >> StringCalculate;
		if (StringCalculate == "0") { break; }
		long Result = 0;
		for (unsigned int i = 0; i < StringCalculate.size(); ++i) {
						Result += StringCalculate[i] - '0';
		}
		std::cout << Result << std::endl;
	}
	//system("pause");
	return 0;
}