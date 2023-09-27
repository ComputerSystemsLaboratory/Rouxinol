#include <iostream>
using namespace std;

int w,h;
int field[51][51];

// »Ýn(x,y)
void dfs(int x, int y){
	// ¡¢éÆ±ëð-1Éu«·¦é
	field[y][x] = -1;

	// Ú®·é8ûüð[v
	for(int dx = -1 ; dx <= 1 ; dx++ ){
		for(int dy = -1 ; dy <= 1 ; dy++ ){
			// xûüÉdx, yûüÉdy, Ú®µ½êð(mx,my)Æ·é
			int mx = x + dx;
			int my = y + dy;
			// ÍÍOÉo½Æ«ÍÌÖ
			if( mx < 0 || my < 0 || mx >= w || my >= h ) continue;
			// ¤n¾Á½çÄAÄÑoµ
			if( field[my][mx] == 1 ){
				dfs( mx , my );
			}
		}
	}
}

int main(){
	while( cin >> w >> h , w||h ){
		for(int y=0 ; y < h ; y++ ){
			for(int x=0 ; x < w ; x++ ){
				cin >> field[y][x];
			}
		}

		int ans = 0;
		for(int y=0 ; y < h ; y++ ){
			for(int x=0 ; x < w ; x++ ){
				if( field[y][x] == 1 ){
					dfs( x , y );
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}