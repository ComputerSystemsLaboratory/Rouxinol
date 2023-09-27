#include<iostream>
using namespace std;
struct Card {char suit, value;};

void BubbleSort(struct Card C[36], int N){
	for(int i = 1; i < N; i ++){
		for(int j = N - 1; j >= i; j --){
			if(C[j].value < C[j - 1].value){
				Card temp;
				temp = C[j];
				C[j] = C[j- 1];
				C[j - 1] = temp;
			}
		}
	}
}

void SelectionSort(struct Card C[36], int N){
	for(int i = 0; i < N; i ++){
		int min = i;
		for(int j = i; j < N; j ++){
			if(C[j].value < C[min].value){
				min = j;
			}
		}
		Card temp;
		temp = C[i];
		C[i] = C[min];
		C[min] = temp;
	}
}

int  main(void){
	Card C[36], C2[36];
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i ++) cin >> C[i].suit >> C[i].value;
	for(int i = 0; i < n; i ++) C2[i] = C[i];
	
	BubbleSort(C, n);
	for(int i = 0; i < n; i ++){
		cout << C[i].suit << C[i].value;
		if(i != n - 1)cout << " ";
	}
	cout << endl << "Stable" << endl;
	
	SelectionSort(C2, n);
	for(int i = 0; i < n; i ++){
		cout << C2[i].suit << C2[i].value;
		if(i != n - 1)cout << " ";
	}
	for(int i = 0; i < n; i ++){
		if(C[i].suit != C2[i].suit){
			cout << endl << "Not stable" << endl;
			return 0;
		}
	}
	cout << endl << "Stable" << endl;
	return 0;
}