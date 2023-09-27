#include <iostream>
using namespace std;

int array[20][20];
int h, w, sx, sy;
int ans;

void out_array(void);
void input(void);
void search(int, int);

int main(){
	while(true){
		
		cin >> w >> h;
		if(w == 0 && h == 0){
			return 0;
		}

		input();
		ans = 0;
		search(sx, sy);
		cout << ans << endl;

	}
}
void out_array(void){
	for(int i = 0;i < h;i++){
		for(int j = 0;j < w;j++){
			cout << array[i][j];
		}
		cout << endl;
	}
}

void input(void){
	for(int i = 0;i < h;i++){
		for(int j = 0;j < w;j++){
			char c;
			cin >> c;
			
			switch(c){
				case '#':
					array[i][j] = 1;//??????
					break;
					
				case '.':
					array[i][j] = 0;//?????????
					break;
					
				case '@':
					array[i][j] = 0;
					sx = j;//????????????
					sy = i;
			}
		}
	}
}

void search(int x,int y){
	if(array[y][x] == 1 || x >= w || y >= h || x < 0 || y < 0){
		return;
	}else{
		array[y][x] = 1;
		ans++;
	}
	search(x - 1, y);
	search(x + 1, y);
	search(x, y - 1);
	search(x, y + 1);
	return;
}