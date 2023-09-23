#include<cstdio>
#include<iostream>
using namespace std;

int main(void){
	int n, b, f, r, v, ko[4][3][10];
	
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 3; ++j){
			for(int k = 0; k < 10; ++k){
				ko[i][j][k] = 0;
			}
		}
	}
	
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> b >> f >> r >> v;
		ko[b-1][f-1][r-1] += v;
	}
	
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 3; ++j){
			for(int k = 0; k < 10; ++k){
				printf(" %d", ko[i][j][k]);
			}
			printf("\n");
		}
		if(i != 3){
			printf("####################\n");
		}
	}
	
	return 0;
}