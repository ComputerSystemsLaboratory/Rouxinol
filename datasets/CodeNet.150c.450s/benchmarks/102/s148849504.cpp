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

bool check[30][30] = { false };
int movex[] = { 0, 1, 0, -1 };
int movey[] = { 1, 0, -1, 0 };

int move(int num, int x, int y){
	int retnum = num;
	if (check[x][y]){
		retnum++;
		check[x][y] = false;
		for (int i = 0; i < 4; i++){
			retnum = move(retnum, x + movex[i], y + movey[i]);
		}
	}

	return retnum;
}

int main(void){

	int W ,H;
	// char ;

	while (scanf("%d %d", &W, &H) != EOF){
		if (W == 0 && H == 0) break;
		int ax, ay;

		for (int i = 0; i<29; i++){
			for (int j = 0; j<29; j++){
				check[i][j] = false;
			}
		}

		for (int i = 1; i<=H; i++){
				char buff[20];
				scanf("%s", buff);
				for (int j = 1; j <= W; j++){
				if (buff[j- 1] == '.') check[i][j] = true;
				else if (buff[j - 1] == '@'){
					check[i][j] = true;
					ax = i;
					ay = j;
				}
			}
		}
		
		cout << move(0, ax, ay) << endl;

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