#include "stdio.h"
#include <iostream>

using namespace std;

static int MAX_N = 36;

struct Card {
	char suit;
	int value;
};

void bubbleSort(int n, Card* cardList) {
	for(int i = 0; i < n; i ++) {
		for(int j = n - 1; j >= i + 1; j --) {
			if(cardList[j].value < cardList[j - 1].value) {
				Card temp = cardList[j - 1];
				cardList[j - 1] = cardList[j];
				cardList[j] = temp;
			}
		}
	}
}

void selectionSort(int n, Card* cardList) {

	for(int i = 0; i < n - 1; i ++) {
		int minIndex = i;
		for(int j = i + 1; j < n; j ++) {
			if(cardList[j].value < cardList[minIndex].value) {
				minIndex = j;
			}
		}
		if(minIndex != i) {
			Card temp = cardList[i];
			cardList[i] = cardList[minIndex];
			cardList[minIndex] = temp;
		}

	}

}

bool isStable(Card* cardListA, Card* cardListB, int n) {
	for(int i = 0; i < n; i ++) {
		if(cardListB[i].suit != cardListA[i].suit) {
			return false;
		}
	}
	return true;
}

void print(struct Card cardList[], int n) {
	for(int i = 0; i < n; i ++) {
		if(i > 0) 
			printf(" ");
		printf("%c%d", cardList[i].suit, cardList[i].value);
	}
	printf("\n");
}

int main() {
	int n;
	Card cardList[MAX_N];
	Card cardListA[MAX_N];
	Card cardListB[MAX_N];

	scanf("%d", &n);
	getchar();
	for(int i = 0; i < n - 1; i ++) {
		scanf("%c%d ", &cardList[i].suit, &cardList[i].value);
	}
	scanf("%c%d", &cardList[n - 1].suit, &cardList[n - 1].value);
	
	for(int i = 0; i < n; i ++) {
		cardListA[i] = cardList[i];
		cardListB[i] = cardList[i];
	}

	bubbleSort(n, cardListA);
	print(cardListA, n);
	printf("Stable\n");

	selectionSort(n, cardListB);
	print(cardListB, n);
	bool flag = isStable(cardListA, cardListB, n);
	if(!flag) {
		printf("Not stable\n");
	} else {
		printf("Stable\n");
	}
}