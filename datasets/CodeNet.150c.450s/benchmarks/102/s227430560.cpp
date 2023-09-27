#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <stack>

using namespace std;

char tile[20][20];
int cnt;
int add_y[4] = {0, 0, 1,-1};
int add_x[4] = {1,-1, 0, 0};

void sarch(int y, int x, int h, int w){
	if(y<0 || y==h || x<0 || x==w) return;

	if(tile[y][x] == '.'){
		cnt++;
		tile[y][x] = '#';

		/*
		for(int i=0 ; i<h ; i++){
			for(int j=0 ; j<w ; j++){
				cout << tile[i][j];
			}
			cout << endl;
		}
		*/

	}else if(tile[y][x] == '#'){
		return;
	}

	for(int i=0 ; i<4 ; i++){
		sarch(y+add_y[i], x+add_x[i], h, w);
	}
	return;
}

int main(){

	int w, h;
	int y, x;

	while(1){
		cin >> w >> h;
		if(w==0 && h==0) break;

		cnt = 0;

		for(int i=0 ; i<20 ; i++){
			for(int j=0 ; j<20 ; j++){
				tile[i][j] = '_';
			}
		}

		string temp[h];
		getline(cin , temp[0]);
		for(int i=0 ; i<h ; i++){
			getline(cin , temp[i]);
			for(int j=0 ; j<w ; j++){
				tile[i][j] = temp[i][j];
				if(tile[i][j] == '@'){
					y = i;
					x = j;
					tile[i][j] = '.';
				}
			}
		}
		sarch(y, x, h, w);
		cout << cnt << endl;
	}
	return 0;
}