#include <iostream>
#include <string>
using namespace std;

string line[30];
int w, h, x, y, sum;

void countup(int x, int y){
	if(line[y][x] != '#'){
		line[y][x] = '#';
		countup(x,y-1);
		countup(x,y+1);
		countup(x+1,y);
		countup(x-1,y);
		sum++;
	}
	return;
}

int main(){
	while(cin >> w >> h){
		if (!w && !h) break;
		sum = 0;
		for(int i = 1;i<=h;i++){
			cin >> line[i];
			line[i] = "#" + line[i] + "#";
			for(int j = 0;j<=w+1;j++){
				if(line[i][j] == '@'){
					x = j;
					y = i;
				}
			}
		}
		line[h + 1] = line[0] = "#####################";
		countup(x, y);
		cout << sum << endl;
	}
	return 0;
}