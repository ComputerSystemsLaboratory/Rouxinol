#include<iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct card {
	char suit;
	int value;
};

void BubbleSort(struct card Card1[], int N) {
	
	int i, flag = 1;

	while(flag){
		flag = 0;
		for (i = N - 1; i >= 1;i--) {
			if (Card1[i].value < Card1[i - 1].value) {
				swap(Card1[i], Card1[i - 1]);
				flag = 1;
			}
		}
	}

}

void SelectionSort(struct card Card2[],int N) {

	int i, j, minj;

	for (i = 0; i < N-1; i++) {
		minj = i;
		for (j = i + 1; j < N; j++) {
			if (Card2[j].value < Card2[minj].value) {
				minj = j;
			}
		}
		swap(Card2[i] , Card2[minj]);
		
	}

}

bool compare(struct card Card1[], struct card Card2[],int N) {

	for (int i = 0; i < N; i++) {
		if (Card1[i].suit != Card2[i].suit)
			return false;
	}
	return true;
}

int main() {

	card Card1[36], Card2[36];
	int i,N;

	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> Card1[i].suit >> Card1[i].value;
	}

	for (i = 0; i < N; i++) {
		Card2[i] = Card1[i];
	}

	BubbleSort(Card1, N);
	SelectionSort(Card2, N);

	for (i = 0; i < N; i++) {
		if (i != 0) cout << " ";
		cout << Card1[i].suit << Card1[i].value;
	}
	cout << endl << "Stable" << endl;
	

	for (i = 0; i < N; i++) {
		if (i != 0) cout << " ";
		cout << Card2[i].suit << Card2[i].value;
	}

	if (compare(Card1, Card2, N))
		cout << endl << "Stable" << endl;
	else cout << endl << "Not stable" << endl;

	return 0;

}