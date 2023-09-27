#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;


void Bubblesort(string card[],int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if (card[j][1] < card[j-1][1]){
				string c =card[j];
				card[j] = card [j-1];
				card[j-1] = c;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i!=n-1) cout << card[i] << " ";
		else cout << card[i] << endl;
	}
}

void SelectionSort(string card[],int n){
	for(int i=0;i<n;i++){
		int minj =i;
		for(int j=i;j<n;j++){
			if(card[j][1]<card[minj][1]){
				minj=j;
			}
		}
		string c =card[i];
		card[i] = card[minj];
		card[minj] = c;
	}
	for(int i=0;i<n;i++){
		if(i!=n-1) cout << card[i] << " ";
		else cout << card[i] << endl;
	}
}

int main () {
	int n,i,k=1;
	cin >> n;
	string card1[n],card2[n];
	for(i=0;i<n;i++){
		cin >> card1[i];
		card2[i]=card1[i];
	}
	Bubblesort(card1,n);
	cout << "Stable" << endl;
	SelectionSort(card2,n);
	for(i=0;i<n;i++){
		if(card1[i]!=card2[i]) k=0;
	}
	if(k==1) cout << "Stable"<< endl;
	else cout << "Not stable" << endl;

	return 0;
}