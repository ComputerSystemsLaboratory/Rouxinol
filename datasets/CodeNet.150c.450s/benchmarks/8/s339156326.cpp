#include<iostream>
#include<string>
int main(void) {
	int NumberOfCombat;
	std::cin >> NumberOfCombat;
	struct STATUS {
		std::string card;
		int points;
	};
	STATUS Taro, Hanako;
	Taro.points = 0;
	Hanako.points = 0;
	for (int i = 0; i < NumberOfCombat; ++i) {
		Taro.card, Hanako.card;
		std::cin >> Taro.card >> Hanako.card;
		if (Taro.card == Hanako.card) {
			Taro.points += 1;
			Hanako.points += 1;
		}
		int CardSizeMax = (Taro.card).size();
		if ((Taro.card).size() < (Hanako.card).size()) {
			CardSizeMax = (Hanako.card).size();
		}
		for (int j = 0; j < CardSizeMax; ++j) {
			int CRITERION = ((Taro.card).size() <= CardSizeMax ? Taro.card[j] : 0) - ((Hanako.card).size() <= CardSizeMax ? Hanako.card[j] : 0);
			if (CRITERION > 0) { Taro.points += 3; break; }
			else if (CRITERION < 0) { Hanako.points += 3; break; }
		}
	}
	std::cout << Taro.points << " " << Hanako.points << std::endl;
	//system("pause");
	return 0;
}