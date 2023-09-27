#include <iostream>
#include <vector>
#include <string>

struct TCard;
void InputCards(int& Count,std::vector<TCard>& Cards);
void OutputCards(const std::vector<TCard>& Cards);
int BubbleSortCards(std::vector<TCard>& Cards);
int SelectionSortCards(std::vector<TCard>& Cards);

struct TCard
{
	char Suit;
	int Value;
	
	bool operator==(const TCard& Other)const;
};

int main()
{
	int Count = 0;
	std::vector<TCard> Cards;
	InputCards(Count,Cards);
	std::vector<TCard> CardsCopy = Cards;
	
	BubbleSortCards(Cards);
	OutputCards(Cards);
	std::cout << "Stable" << std::endl;
	
	SelectionSortCards(CardsCopy);
	OutputCards(CardsCopy);
	if(CardsCopy == Cards)
	{
		std::cout << "Stable" << std::endl;
	}else{
		std::cout << "Not stable" << std::endl;
	}
	
	return 0;
}

void InputCards(int& Count,std::vector<TCard>& Cards)
{
	std::cin >> Count;
	for(int i=0;i<Count;i++)
	{
		TCard TempCard;
		char Suit = 0;
		std::cin >> Suit;
		TempCard.Suit = Suit;
		int Value = 0;
		std::cin >> Value;
		TempCard.Value = Value;
		Cards.push_back(TempCard);
	}
}

void OutputCards(const std::vector<TCard>& Cards)
{
	for(unsigned int i=0;i<Cards.size();i++)
	{
		std::cout << Cards[i].Suit << Cards[i].Value << std::flush;
		if(i != Cards.size() - 1)
		{
			std::cout << " " << std::flush;
		}else{
			std::cout << std::endl;
		}
	}
}

int BubbleSortCards(std::vector<TCard>& Cards)
{
	int SwapCount = 0;
	for(unsigned int i = 0;i<Cards.size();i++)
	{
		for(unsigned int j = Cards.size() - 1;j > i;j--)
		{
			if(Cards[j].Value < Cards[j-1].Value)
			{
				std::swap(Cards[j],Cards[j-1]);
				SwapCount++;
			}
		}
	}
	return SwapCount;
}

int SelectionSortCards(std::vector<TCard>& Cards)
{
	int SwapCount = 0;
	for(unsigned int i = 0;i<Cards.size();i++)
	{
		unsigned int Min = i;
		for(unsigned int j = i;j<Cards.size();j++)
		{
			if(Cards[j].Value < Cards[Min].Value)
			{
				Min = j;
			}
		}
		if(i != Min) SwapCount++;
		std::swap(Cards[i],Cards[Min]);
	}
	return SwapCount;
}

bool TCard::operator==(const TCard& Other)const
{
	if(Suit == Other.Suit && Value == Other.Value) return true;
	return false;
}