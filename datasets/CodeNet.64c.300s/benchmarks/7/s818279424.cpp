#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int n, rank;
	char str;
	int a[4][13] = {0};
	cin >> n;



	for(int i = 0; i < n; i++){
		cin >> str >> rank;

		switch(str){
			case 'S': a[0][rank-1] = 1; break;
			case 'H': a[1][rank-1] = 1; break;
			case 'C': a[2][rank-1] = 1; break;
			case 'D': a[3][rank-1] = 1; break;
			default : break;
		}
	}

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			if(a[i][j] == 0){
				switch(i){
					case 0: printf("S %d", j + 1); break;
					case 1: printf("H %d", j + 1); break;
					case 2: printf("C %d", j + 1); break;
					case 3: printf("D %d", j + 1); break;
				}
				printf("\n");
			}
		}
	}

	return 0;
}