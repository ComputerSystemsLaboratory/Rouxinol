#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
struct Card{ char suit,value; };

void BubbleSort(struct Card C[],int n){
	Card tmp;
	for (int i = 0; i < n; i++){
		for (int j = n - 1; j >= i; j--){
			if (C[j].value < C[j - 1].value){
				tmp = C[j]; C[j] = C[j - 1]; C[j - 1] = tmp;
			}
		}
	}
}

void SelectionSort(struct Card C[],int n){
	Card tmp;
	for (int i = 0; i < n; i++){
		int min = i;
		for (int j = i; j < n; j++){
			if (C[j].value < C[min].value){
				min = j;
			}
		}
		tmp = C[i]; C[i] = C[min]; C[min] = tmp;
	}
}

void print(struct Card C[],int n){
	for (int i = 0; i < n; i++){
		if (i != 0)
			cout << " ";
		cout << C[i].suit << C[i].value;
	}
	cout << endl;
}

bool isStable(struct Card C1[],struct Card C2[],int n){
	for (int i = 0; i < n; i++){
		if (C1[i].suit != C2[i].suit){
			return false;
		}
	}
	return true;
}

int main(){
	Card C1[100], C2[100];
	int n;
	char ch;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> C1[i].suit >> C1[i].value;
	}
	for (int i = 0; i < n; i++)
		C2[i] = C1[i];
	BubbleSort(C1, n);
	SelectionSort(C2, n);
	print(C1, n);
	cout << "Stable" << endl;
	print(C2, n);
	if (isStable(C1, C2, n)){
		cout << "Stable" << endl;
	}
	else{
		cout << "Not stable" << endl;
	}
	return 0;
}