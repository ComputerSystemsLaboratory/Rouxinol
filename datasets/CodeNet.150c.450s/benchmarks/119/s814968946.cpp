#include <iostream>
#include <string>
#include <vector>

using namespace std;

void del(int x, int y);

vector< vector<int> > arr;
int w, h;

int main(){
	
	while(cin >> w >> h, w | h){
		int ans = 0;
		arr.resize(h);
		for(int i = 0; i < h; i++){
			arr[i].resize(w);
		}
		
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				cin >> arr[i][j];
			}
		}
		
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(arr[i][j] == 1){
					del(i, j);
					ans++;
				}
			}
		}
				
		
		cout << ans << endl;
		arr.clear();
	}
	
	return 0;
	
}

void del(int x, int y){
	arr[x][y] = 0;	
	
	if(x + 1 < h && arr[x + 1][y] == 1){
		del(x + 1, y);
	}
	if(y + 1 < w && arr[x][y + 1] == 1){
		del(x, y + 1);
	}
	if(x - 1 > -1 && arr[x - 1][y] == 1){
		del(x - 1, y);
	}
	if(y - 1 > -1 && arr[x][y - 1] == 1){
		del(x, y - 1);
	}
	if(x + 1 < h && y + 1 < w && arr[x + 1][y + 1] == 1){
		del(x + 1, y + 1);
	}
	if(x - 1 > -1 && y + 1 < w && arr[x - 1][y + 1] == 1){
		del(x - 1, y + 1);
	}
	if(x - 1 > -1 && y - 1 > -1 && arr[x - 1][y - 1] == 1){
		del(x - 1, y - 1);
	}
	if(x + 1 < h && y - 1 > -1 && arr[x + 1][y - 1] == 1){
		del(x + 1, y - 1);
	}
	
	return;
}