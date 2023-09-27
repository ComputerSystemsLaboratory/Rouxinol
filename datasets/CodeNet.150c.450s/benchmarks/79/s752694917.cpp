//#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
//#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <set>
using namespace std;

int main(void){

	int n, r;
	// char ;

	while (scanf("%d %d", &n, &r) != EOF){
		if (n == 0 && r == 0) break;
		int card[100];
		for (int j = 1; j <= n; j++){
			card[j] = n - j + 1;
		}

		for (int i = 0; i < r; i++){
			int p, c;
			int buff[100];
			scanf("%d %d", &p, &c);

			for (int j = 0; j < c; j++){
				buff[j] = card[p + j];
			}

			for (int j = p + c - 1; j >= c + 1; j--){
				card[j] = card[j - c];
			}

			for (int j = 0; j < c; j++){
				card[j + 1] = buff[j];
			}

		}
		
		cout << card[1] << endl;

	}

	return 0;
}

/*
for(i=0;i<N;i++){
cin >> X[i];
}


for(i=0;i<N;i++){
for(j=0;j<N;j++){
cin >> X[i][j];
}
}
*/