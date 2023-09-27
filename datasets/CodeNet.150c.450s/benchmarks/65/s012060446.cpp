#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct TCard;
void InputCards(int& Count,std::vector<TCard>& Cards);
void OutputCards(const std::vector<TCard>& Cards);
std::string BubbleSortCards(std::vector<TCard>& Cards);
std::string SelectionSortCards(std::vector<TCard>& Cards);
std::string IsStable(const std::vector<TCard>& Cards,const std::vector<TCard>& OriginalCards);

struct TCard
{
	char Suit;
	int Value;
	
	bool operator<(const TCard& Other)const;
	bool operator==(const TCard& Other)const;
};

int main()
{
	int Count = 0;
	std::vector<TCard> Cards;
	InputCards(Count,Cards);
	std::vector<TCard> CardsCopy = Cards;
	
	std::string Result = BubbleSortCards(Cards);
	OutputCards(Cards);
	std::cout << Result << std::endl;
	
	Result = SelectionSortCards(CardsCopy);
	OutputCards(CardsCopy);
	std::cout << Result << std::endl;
	
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

std::string BubbleSortCards(std::vector<TCard>& Cards)
{
	std::vector<TCard> OriginalCards = Cards;
	for(unsigned int i = 0;i<Cards.size();i++)
	{
		for(unsigned int j = Cards.size() - 1;j > i;j--)
		{
			if(Cards[j].Value < Cards[j-1].Value)
			{
				std::swap(Cards[j],Cards[j-1]);
			}
		}
	}
	return IsStable(Cards,OriginalCards);
}

std::string SelectionSortCards(std::vector<TCard>& Cards)
{
	std::vector<TCard> OriginalCards = Cards;
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
		std::swap(Cards[i],Cards[Min]);
	}
	return IsStable(Cards,OriginalCards);
}

std::string IsStable(const std::vector<TCard>& Cards,const std::vector<TCard>& OriginalCards)
{
	std::vector<TCard> StableCards = OriginalCards;
	std::stable_sort(StableCards.begin(),StableCards.end());

	if(Cards == StableCards) return "Stable";
	return "Not stable";
}

bool TCard::operator<(const TCard& Other)const
{
	if(Value < Other.Value) return true;
	return false;
}

bool TCard::operator==(const TCard& Other)const
{
	if(Suit == Other.Suit && Value == Other.Value) return true;
	return false;
}