#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

#define MAX 256

int main(void){
	int N[52];
	for (int i = 0; i < 52; i++){
		N[i] = 0;
	}

	int n, a;
	char b;

	scanf("%d", &n);
	
	for (int i = 0; i < 2*n; i++){
		scanf("%c%d", &b, &a);
		switch (b){
		case 'S': N[a - 1] = 1; break;
		case 'H': N[a + 12] = 1; break;
		case 'C': N[a + 25] = 1; break;
		case 'D': N[a + 38] = 1; break;
		}
	}
	for (int i = 0; i < 52; i++){
		if (N[i] == 0){
			switch (i / 13){
			case 0:printf("S %d\n", i % 13 + 1); break;
			case 1:printf("H %d\n", i % 13 + 1); break;
			case 2:printf("C %d\n", i % 13 + 1); break;
			case 3:printf("D %d\n", i % 13 + 1); break;
			}
		}
	}


	return 0;
}