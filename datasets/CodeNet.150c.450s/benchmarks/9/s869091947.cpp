#include <iostream>
#include <string>

const std::string END_OF_TEXT = "END_OF_TEXT";

int main(void)
{
	std::string cards, cardsShuffled;
	while (std::cin >> cards, cards != "-")
	{
		int shuffleNum;
		std::cin >> shuffleNum;
		int h = 0;
		for (int i = 0; i < shuffleNum; i++)
		{
			int temp;
			std::cin >> temp;
			h += temp;
		}
		h %= cards.size();
		cardsShuffled = cards.substr(h, cards.size() - h) + cards.substr(0, h);
		std::cout << cardsShuffled << '\n';
		cards.clear();
		cardsShuffled.clear();
	}
	return 0;
}