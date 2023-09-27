#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Card {
	string suit;
	int number;
};
using vec = vector<Card>;

void QuickSort(Card* A, const int p, const int r);
int Partition(Card* A, const int p, const int r);
bool isStable(const vec A, const vec B);

int main() {
	int n;
	vec cards;

	cin >> n;
	cards.resize(n);
	for(auto&& e : cards) {
		cin >> e.suit >> e.number;
	}
	vec org = cards;
	QuickSort(cards.data(), 0, n - 1);

	cout << ((isStable(cards, org) ? "Stable" : "Not stable")) << endl;
	for(const auto& e : cards) {
		cout << e.suit << " " << e.number << endl;
	}

	return 0;
}

void QuickSort(Card* A, const int p, const int r) {
	if(p < r) {
		const int q = Partition(A, p, r);
		QuickSort(A, p, q - 1);
		QuickSort(A, q + 1, r);
	}
}

int Partition(Card* A, const int p, const int r) {
	const Card x = A[r];
	int i = p - 1;
	for(int j = p; j < r; j++) {
		if(x.number >= A[j].number) {
			swap(A[++i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

bool isStable(const vec A, const vec B) {
	int num = A[0].number;
	int count = 0;
	string str[4];

	for(int i = 0; i < A.size(); i++) {
		if(num == A[i].number) {
			str[count++] = A[i].suit;
		}
		else{
			int strIdx = 0;
			for(const auto& e : B){
				if(e.number != num) { continue; }

				if(e.suit != str[strIdx++]){
					return false;
				}
				if(strIdx > count) { break; }
			}
			num = A[i].number;
			count = 1;
			str[0] = A[i].suit;
		}
	}
	return true;
}

