#include<stdio.h>

typedef struct{
	char c;
	int v;
}Card;

void setCard(Card *card, char _c, int _v){
	card->c = _c;
	card->v = _v;
	return;
}

void swapCard(Card *c0, Card *c1){
	Card temp;
	setCard(&temp, c0->c, c0->v);
	setCard(c0, c1->c, c1->v);
	setCard(c1, temp.c, temp.v);
	return;
}

int partition(Card A[], int p, int r){
	int x = A[r-1].v;
	int i = p-1, j;
	for( j = p; j < r-1; j++ ){
		if( A[j].v <= x ){
			i++;
			swapCard(&A[i], &A[j]);
		}
	}
	swapCard(&A[i+1], &A[r-1]);
	return i+1;
}

void quickSort(Card A[], int p, int r){
	if( p < r ){
		int q = partition(A, p, r);
		quickSort(A, p, q);
		quickSort(A, q+1, r);
	}
	return;
}

int main(){
	int n, i, j, isStable = 1;
	char t;
	Card card[100000], iCard[100000];
	scanf("%d", &n);
	scanf("%c", &t);
	for( i = 0; i < n; i++ ){
		scanf("%c %d", &card[i].c, &card[i].v);
		setCard(&iCard[i], card[i].c, card[i].v);
		scanf("%c", &t);
	}
	quickSort(card, 0, n);
	int bv = -1;
	for( i = 0; i < n; i++ ){
		if( card[i].v != bv ){ j = 0; }
		bv = card[i].v;
		for( ; j < n; j++ ){
			if( card[i].v == iCard[j].v ){
				if( card[i].c == iCard[j].c ){
					j++;
					break;
				}else{
					isStable = 0;
					break;
				}
			}
		}
	}
	printf("%s\n", (isStable?"Stable":"Not stable"));
	for( i = 0; i < n; i++ ){ printf("%c %d\n", card[i].c, card[i].v); }
	return 0;
}

