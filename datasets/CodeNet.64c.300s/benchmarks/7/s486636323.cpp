#include<cstdio>
#include<iostream>
using namespace std;

int main(void){
	char pattern;
	int n, rank;
	bool card[4][13];
	
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 13; ++j){
			card[i][j] = false;
		}	
	}
	
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> pattern >> rank;
		if(pattern == 'S'){
			card[0][rank-1] = true;
		} else if(pattern == 'H'){
			card[1][rank-1] = true;
		} else if(pattern == 'C'){
			card[2][rank-1] = true;
		} else if(pattern == 'D'){
			card[3][rank-1] = true;
		}
	}
	
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 13; ++j){
			if(i == 0 && card[i][j] == false){
				printf("S %d\n", j + 1);
			} else if(i == 1 && card[i][j] == false){
				printf("H %d\n", j + 1);
			} else if(i == 2 && card[i][j] == false){
				printf("C %d\n", j + 1);
			} else if(i == 3 && card[i][j] == false){
				printf("D %d\n", j + 1);
			}
		}	
	}
	return 0;
}