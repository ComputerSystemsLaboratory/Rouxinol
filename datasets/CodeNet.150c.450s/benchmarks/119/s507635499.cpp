#include<iostream>
using namespace std;

int checkMap(int w, int h, int map[52][52]){
	if(map[w][h]){
		map[w][h]=0;
		 checkMap(w+1, h+1, map);
		 checkMap(w+1, h, map);
		 checkMap(w+1, h-1, map);
		 checkMap(w, h-1, map);
		 checkMap(w-1, h-1, map);
		 checkMap(w-1, h, map);
		 checkMap(w-1, h+1, map);
		 checkMap(w, h+1, map);
		 return 1;
	}else return 0;
		 
}


int main(){
	int w,h;

	while(cin >> w >> h, w){
	int map[52][52] = {{0}};
		int ans=0;
		for(int i = 1; i <= h; i++){
			for(int j = 1; j <= w; j++){
				cin >> map[i][j];
			}
		}
		for(int i = 1; i <= h; i++){
			for(int j = 1; j <= w; j++){
			ans += checkMap(i, j, map);
			}
		}
		cout << ans << endl;
	}
}