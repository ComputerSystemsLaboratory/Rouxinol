#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <limits.h>
using namespace std;

int m[101][101]; // m[i][j]: from i to j (columns)
int p[101]; // 
int main(){
	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		int r, c; scanf("%d %d", &r, &c);
		p[i] = r; p[i + 1] = c;
	}
	// initialize m[][]
	for (int i = 0; i <= 100; ++i){
		for (int j = 0; j <= 100; ++j) m[i][j] = INT_MAX;
	}
	for (int i = 0; i <= 100; ++i) m[i][i] = 0;
	//
	for (int l = 2; l <= n; ++l){
		for (int i = 1; i <= n-l+1; ++i){
			int j = i + l - 1;
			for (int k = i; k < j; ++k){
				if (m[i][k] == INT_MAX || m[k + 1][j] == INT_MAX) continue;
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}
	cout << m[1][n] << '\n';
}