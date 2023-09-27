#include<iostream>
#include<string>
#include<vector>
#include<cctype>
int main(void) {
	std::string InputW, InputT;
	int count = 0;
	std::cin >> InputW;
	for (int i = 0; i < InputW.size(); ++i) {
		InputW[i] = std::tolower(InputW[i]);
	}
	while (1) {
		std::cin >> InputT;
		if (InputT == "END_OF_TEXT") { break; }
		for (int i = 0; i < InputT.size(); ++i) {
			InputT[i] = std::tolower(InputT[i]);
		}
	
		if (InputW == InputT) {
			++count;
		}
	}	
	std::cout << count << std::endl;
	//system("pause");
	return 0;
}