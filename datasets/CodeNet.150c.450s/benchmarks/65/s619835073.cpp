#include <iostream>

using namespace std;
struct Card {
	char suit, value;
};
void printList(Card C[], int n){
	for(int i=0; i<n-1; i++){
		cout << C[i].suit << C[i].value << ' ';
	}
	cout << C[n-1].suit << C[n-1].value << endl;
}
void bubbleSort(Card C1[], int n){
	int flag = 1;
	for(int i=0; flag; i++){
		flag = 0;
		for (int j=n-1; j>i; j--){
			if(C1[j].value < C1[j-1].value){
				Card t = C1[j];
				C1[j] = C1[j-1];
				C1[j-1] = t;
				flag = 1;
			}
		}
	}
	printList(C1, n);
}
void selectionSort(Card C2[], int n){
	for(int i=0; i<n; i++){
		int minj = i;
		for(int j=i; j<n; j++){
			if(C2[j].value < C2[minj].value)
				minj = j;
		}
		if(minj != i){
			Card t = C2[i];
			C2[i] = C2[minj];
			C2[minj] = t;
		}
	}
	printList(C2, n);
}
void isStable(Card C1[], Card C2[], int n){
	for(int i=0; i<n; i++){
		if(C1[i].suit != C2[i].suit){
			cout << "Not stable" << endl;
			return;
		}
	}
	cout << "Stable" << endl;
}
int main() {
	Card C1[100], C2[100];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> C1[i].suit >> C1[i].value;
		C2[i] = C1[i];
	}
	bubbleSort(C1, n);
	cout << "Stable" << endl;
	selectionSort(C2, n);
	isStable(C1, C2, n);
	return 0;
}