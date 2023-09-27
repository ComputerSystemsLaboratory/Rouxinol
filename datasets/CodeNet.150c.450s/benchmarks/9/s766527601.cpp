#include<iostream>
#include<string>
int main(void) {
	while (1) {
		std::string Charactor;
		std::cin >> Charactor;
		if (Charactor[0]=='-') { break; }
		int shaffle;
		int count = 0;
		std::cin >> shaffle;
		for (int i = 0; i < shaffle; ++i) {
			int value;
			std::cin >> value;
			count += value;
		}
		for (int i = 0; i < Charactor.size(); ++i) {
			std::cout << Charactor[(i + count) % Charactor.size()];
		}
		std::cout << std::endl;
}
//	system("pause");
	return 0;
}