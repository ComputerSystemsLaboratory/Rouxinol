#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int w, h;
string str[30];

int search(int y, int x){
	if(x < 0 || x >= w || y < 0 || y >= h){
		return 0;
	}
	if(str[y][x] == '#'){
		return 0;
	}
	str[y][x] = '#';
	int ret = 1;
	ret += search(y, x - 1);
	ret += search(y, x + 1);
	ret += search(y - 1, x);
	ret += search(y + 1, x);
	return ret;
}

int main(){
	
	while(true){
		cin >> w >> h;
		if(w == 0 && h == 0){
			break;
		}
		for(int i = 0; i < h; i++){
			cin >> str[i];
		}
		int ans;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(str[i][j] == '@'){
					ans = search(i, j);
				}
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}