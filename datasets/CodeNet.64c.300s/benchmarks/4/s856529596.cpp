/*
???????????´??°a, b, c?????????????????????????????? a < b < c????????¶????????????????????°"Yes"??????
???????????????????????°"No"???????????????????????°?????????????????????????????????
*/

#include <iostream>

int main() {
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	if (num1 < num2 && num2 < num3 && num1 < num3) {
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}
	return 0;
}