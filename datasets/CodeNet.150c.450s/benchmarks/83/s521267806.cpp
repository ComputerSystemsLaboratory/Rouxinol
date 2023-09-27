#include<stdio.h>
#include<string.h>
#include<iostream>
#include <fstream>
using namespace std;

#define N	100
#define maxW	10000
int	v[N] = { 0 };
int	w[N] = { 0 };
int C[N+1][maxW+1] = { 0 };

int main(){
	std::istream & c_in = cin;
	int	n, W;
	c_in >> n >> W;
	for (int i = 0; i < n; i++){
		c_in >> v[i+1] >> w[i+1];
	}

	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= W; ++j){
			if (w[i] <= j){
				if (v[i] + C[i - 1][j - w[i]] > C[i - 1][j]){
					C[i][j] = v[i] + C[i - 1][j - w[i]];
				}
				else
				{
					C[i][j] = C[i - 1][j];
				}
			}
			else{
				C[i][j] = C[i - 1][j];
			}
		}
	}
	printf("%d\n", C[n][W]);
	return 0;
}