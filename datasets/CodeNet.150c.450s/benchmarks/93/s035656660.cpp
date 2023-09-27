#include<algorithm>
#include<iostream>
#include<string>
#include<utility>
#include<vector>
class Card {
public:
	//private????????????
	int check;
	std::string DesignCard;
	int ValueCard;
	//public
	int ReturnValue();
	void SetCheck(int InputValueCard, std::string InputDesignCard, int num);
	
	
};
void Card::SetCheck(int InputValueCard, std::string InputDesignCard, int num) {
	check = num;
	ValueCard = InputValueCard;
	DesignCard = InputDesignCard;
}
int Card::ReturnValue() {
	return ValueCard;
}

int  partition(std::vector<Card>&A, int p, int r) {
	int x = A[r].ValueCard;
	int i = p - 1;
	for (int j = p; j <= r - 1; ++j) {
		if (A[j].ValueCard <= x) {
			++i;
			std::swap(A[i], A[j]);
			}
	}
	std::swap(A[i + 1], A[r]);
	return i + 1;
}

void  quickSort(std::vector<Card>&A, int p, int r) {

	if (p < r) {
	int	q = partition(A, p, r);
	quickSort(A, p, q - 1);
	quickSort(A, q + 1, r);
	}
		     
	return;
}
bool stable(std::vector<Card> InputCard) {
	for (unsigned int i = 0; i < InputCard.size() - 1; ++i) {
		if (InputCard[i].ReturnValue() == InputCard[i + 1].ReturnValue()) {
			if (InputCard[i].check > InputCard[i + 1].check) {
				return false;
			}
		}
	}
	return true;
}
void print_stable(bool stable) {
	if (stable == true) {
		std::cout << "Stable" << std::endl;
	}
	else {
		std::cout << "Not stable" << std::endl;
	}
}
int main(void) {
	std::ios_base::sync_with_stdio(false);
	int n;
	std::cin >> n;
	std::vector<std::pair<std::string, int> >Input(n, { "",0 });
	for (int i = 0; i < n; ++i) {
		std::cin >> Input[i].first >> Input[i].second;
	}
	std::vector<Card>QuickCard(n);
	for (int i = 0; i < n; ++i) {
		QuickCard[i].SetCheck(Input[i].second, Input[i].first, i);
			}
	quickSort(QuickCard, 0, n - 1);
	 print_stable(stable(QuickCard));
	for (int i = 0; i < n; ++i) {
	  std::cout << QuickCard[i].DesignCard << " " << QuickCard[i].ValueCard << std::endl;
	}
	//system("pause");
	return 0;
}