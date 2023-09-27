#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct TCard
{
	char Suit;
	int  Number;
	bool operator==(const TCard& A)const;
};

bool TCard::operator==(const TCard& A)const
{
	return Suit == A.Suit && Number == A.Number;
}

bool CompareCards(const TCard& Small, const TCard& Large)
{
	return Small.Number < Large.Number;
}

typedef std::vector<TCard> TCards;

int Partition(std::vector<TCard>& A, int p, int r)
{
	TCard X = A[r];
	int i = p - 1;
	for(int j = p; j < r; j++){
		if(CompareCards(A[j], X) || A[j].Number == X.Number){
			i++;
			std::swap(A[i], A[j]);
		}
	}
	std::swap(A[i+1], A[r]);
	return i + 1;
}

void QuickSort(TCards& Cards, int p, int r)
{
	if(p < r){
		int q = Partition(Cards, p, r);
		QuickSort(Cards, p, q - 1);
		QuickSort(Cards, q + 1, r);
	}
}

std::string IsStable(const TCards& Sorted, TCards& Original)
{
	std::stable_sort(Original.begin(), Original.end(), CompareCards);
	if(Sorted == Original) return "Stable";
	return "Not stable";
}

int main()
{
	int Count;
	std::cin >> Count;
	TCards Cards(Count);
	for(int i=0; i < Count; i++){
		std::cin >> Cards[i].Suit;
		std::cin >> Cards[i].Number;
	}
	TCards Original = Cards;
	QuickSort(Cards, 0, Count - 1);
	std::cout << IsStable(Cards, Original) << std::endl;
	for(int i=0; i < Count; i++){
		std::cout << Cards[i].Suit << " " << Cards[i].Number << std::endl;
	}
	return 0;
}