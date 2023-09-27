//============================================================================
// Name        : ITP_1_6_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int a[4][3][10],n,b,f,r,v;
	cin >> n;
	for(int i=0;i<4;++i) {
		for(int j=0;j<3;++j) {
			for(int k=0;k<10;++k) {
				a[i][j][k]=0;
			}
		}
	}
	for(int i=0; i<n; ++i) {
		cin >> b >> f >> r >> v;
		a[b-1][f-1][r-1]+=v;
	}
	for(int i=0;i<4;++i) {
		for(int j=0;j<3;++j) {
			printf(" %d %d %d %d %d %d %d %d %d %d\n"
					,a[i][j][0]
					,a[i][j][1]
					,a[i][j][2]
					,a[i][j][3]
					,a[i][j][4]
					,a[i][j][5]
					,a[i][j][6]
					,a[i][j][7]
					,a[i][j][8]
					,a[i][j][9]);

		}
		if(i==3) break;
		printf("####################\n");
	}
	return 0;
}