#include <iostream>
#include <string>
#include <cstring>

char a[200][200];
using namespace std;
int d[][2] = {0,1,0,-1,1,0,-1,0};
void fill(int x, int y, char c){
	a[x][y] = '.';
	for(int i = 0; i < 4; ++i){
		int x_ = x+d[i][0];
		int y_ = y+d[i][1];
		if(a[x_][y_] == c){
			fill(x_, y_, c);
		}
	}
}
int main(){
	int H,W;
	cin >> H >> W;
	while(H){
		//init
		memset(a, '\0', sizeof a);
		//read data
		cin.ignore();
		for(int i = 0; i < H; ++i){
			string s;
			getline(cin, s);
			strcpy((char *)(a[i+1])+1, s.c_str());
		}
		//count the number of areas
		int c = 0;
		for(int i = 1; i <= H; ++i){
			for(int j = 1; j <= W; ++j){
				if(a[i][j] != '.'){
					fill(i, j, a[i][j]);
					c++;
				}
			}
		}
		cout << c << endl;
		cin >> H >> W;
	}
}