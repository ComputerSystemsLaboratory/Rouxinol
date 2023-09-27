#include <iostream>
#include <stdlib.h>

struct Card{ char suit,value; };

void bubbleSort(Card C[],int N){
	for(int i = 0;i < N;i++){
		for(int j = N-1;j >= 0;j--){
			if(C[j].value < C[j-1].value){
				Card buf = C[j];
				C[j] = C[j-1];
				C[j-1] = buf;
			}
		}
	}
}
void selectionSort(Card C[],int N){
	for(int i = 0;i < N;i++){
		int minj;
		minj = i;
		Card buf;
		for(int j = i;j < N;j++){
			if(C[j].value < C[minj].value){
				minj = j;
			}
		}
		buf = C[i];
		C[i] = C[minj];
		C[minj] = buf;
	}
}
void print(Card C[],int N){
	for (int i = 0; i < N; i++) {
		if(i > 0 ) std::cout << " ";
		std::cout << C[i].suit << C[i].value;
	}
	std::cout << std::endl;
}
bool isStable(Card C1[],Card C2[],int N){
	for(int i = 0;i < N;i++){
			if(C1[i].suit != C2[i].suit) return false;
	}
	return true;
}

int main(){
	int n;
	char card_char[36][3];
	Card C1[36],C2[36];

	std::cin >> n;
	for(int i = 0;i < n; i++) std::cin >> card_char[i];
	for(int i = 0;i < n; i++){
		C1[i].suit = card_char[i][0];
		C1[i].value = card_char[i][1];
		C2[i] = C1[i];
	}
	bubbleSort(C1,n);
	print(C1,n);
	std::cout << "Stable" << std::endl;
	selectionSort(C2,n);
	print(C2,n);
	if(isStable(C1,C2,n)){
		std::cout << "Stable" << std::endl;
	}else{
		std::cout << "Not stable" << std::endl;
	}

	return 0;
}