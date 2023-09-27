#include<iostream>
#include<cstdio>
using namespace std;
int cards[4][13];

int main(){
	int n;
	char suit;
	int number;
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			cards[i][j] = 0;
		}
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin >> suit >> number;
		number -= 1;
		if(suit == 'S') cards[0][number] = 1;
		else if(suit == 'H') cards[1][number] = 1;
		else if(suit == 'C') cards[2][number] = 1;
		else if(suit == 'D') cards[3][number] = 1;
	}
	for(int i=0;i<13;i++){
		if(cards[0][i] == 0) printf("S %d\n",i+1);
	}
	for(int i=0;i<13;i++){
		if(cards[1][i] == 0) printf("H %d\n",i+1);
	}
	for(int i=0;i<13;i++){
		if(cards[2][i] == 0) printf("C %d\n",i+1);
	}
	for(int i=0;i<13;i++){
		if(cards[3][i] == 0) printf("D %d\n",i+1);
	}
	return 0;
}