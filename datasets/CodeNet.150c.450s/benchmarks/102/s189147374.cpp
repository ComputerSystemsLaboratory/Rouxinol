#include <iostream>
#include <vector>
#include <string>
using namespace std;

int h, w = 0;
int ct = 0;
vector<string> map;

void count(int y,int x){
	map[y][x] = 'X';
	if (y != 0){
		if (map[y-1][x] == '.'){
				count(y-1,x);
		}
	}
	if (y != h-1){
		if (map[y+1][x] == '.'){
				count(y+1,x);
		}
	}
	if (x != 0){
		if (map[y][x-1] == '.'){
				count(y,x-1);
		}
	}
	if (x != w-1){
		if (map[y][x+1] == '.'){
				count(y,x+1);
		}
	}
	ct++;
}

int main(){
	int stx, sty;
	while (1){
		cin >> w >> h;
		if (h == 0 && w == 0){
			break;
		}
		for (int i = 0; i < h; i++){
			string tmp;
			cin >> tmp;
			map.push_back(tmp);
			for (int j = 0; j < w; j++){
				if (map[i][j] == '@'){
					sty = i;
					stx = j;
				}
			}
		}
		count(sty,stx);
		cout << ct << endl;
		ct = 0;
		map.clear();
	}
	return 0;
}