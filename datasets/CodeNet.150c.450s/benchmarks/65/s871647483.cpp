#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct Card{
	char suit;
	int value;
};

void babblesort(struct Card c[], int n){
	bool flag = true;
	for(int i=0 ; flag ; i++){
		flag = false;
		for(int j=n-1 ; j>=i+1 ; j--){
			if(c[j].value < c[j-1].value){
				Card t = c[j];
				c[j] = c[j-1];
				c[j-1] = t;
				flag = true;
			}
		}
	}
}
	
void selectsort(struct Card c[], int n){
	int minj;
	for(int i=0 ; i<n ; i++){
		minj = i;
		for(int j=i ; j<n ;j++){
			if(c[minj].value > c[j].value){
				minj = j;
			}
		}
		Card t = c[i];
		c[i] = c[minj];
		c[minj] = t;
	}
}

int main() {
	Card c1[100], c2[100];
	
	int n;
	scanf("%d",&n);
	
	for(int i=0 ; i<n ; i++){
		cin>>c1[i].suit>>c1[i].value;
	}
	for(int i=0 ; i<n ; i++) c2[i] = c1[i];
	
	babblesort(c1, n);
	selectsort(c2, n);
	
	bool flag = true;
	for(int i=0 ; i<n ; i++){
		if(c1[i].suit != c2[i].suit){
			flag = false;
			break;
		}
	}
	
	for(int i=0 ; i<n ; i++){
		if(i) printf(" ");
		printf("%c%d",c1[i].suit,c1[i].value);	
	}
	printf("\n");
	printf("Stable\n");
	
	for(int i=0 ; i<n ; i++){
		if(i) printf(" ");
		printf("%c%d",c2[i].suit,c2[i].value);	
	}
	printf("\n");
	if(flag == true){
		printf("Stable\n");
	}else{
		printf("Not stable\n");
	}
	
	return 0;
}