#include <iostream>
#include <vector>
#include <string>
using namespace std;

int H, W;
vector< vector< char > > field;

int rec(int x, int y, char ch){
	if(field[x][y] == '.' || field[x][y] != ch)
		return 0;
	field[x][y] = '.';
	
	if(x > 0)
		rec(x-1, y, ch);
	if(x < H - 1)
		rec(x+1, y, ch);
	if(y > 0)
		rec(x, y-1, ch);
	if(y < W - 1)
		rec(x, y+1, ch);
	return 1;
}

int main(){
	string temp;
	int count;
	
	while(cin >> H >> W, H){
		count = 0;
		field.resize(H);
		for(int i = 0; i < H; ++i){
			field[i].resize(W);
			cin >> temp;
			for(int j = 0; j < temp.length(); ++j)
				field[i][j] = temp[j];
		}
		
		for(int i = 0; i < H; ++i)
			for(int j = 0; j < W; ++j)
				count += rec(i,j,field[i][j]);
		
		cout << count << endl;
	}
}