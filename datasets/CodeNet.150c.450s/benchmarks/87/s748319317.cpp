#include <iostream>
using namespace std;


int table[10][5];

int H,W;
int destroy(){
	int done[10][5]={};
	for(int i = 0 ; i < H ; i++){
		for(int j = 0 ; j+2 < W ; j++){
			if( table[i][j] == table[i][j+1] && table[i][j+2] == table[i][j] )
				done[i][j] = done[i][j+1] = done[i][j+2] = 1;
		}
	}

	int ans = 0;
	for(int i = 0 ; i < H ; i++){
		for(int j = 0 ; j < W ; j++){
			if( done[i][j] ){
				ans += table[i][j];
				table[i][j] = 0;
			}
		}
	}
	for(int k = 0 ; k < H ; k++)
	for(int i = 0; i+1 < H ; i++){
		for(int j = 0 ; j < W ; j++){
			if( table[i+1][j] == 0 ){
				table[i+1][j] = table[i][j];
				table[i][j] = 0;
			}
		}
	}
	return ans;
}
int main(){
	while( cin >> H && H ){	
		W = 5;
		for(int i = 0 ; i < H ; i++)
			for(int j = 0 ; j < W ; j++)
				cin >> table[i][j];
		int r;
		int ans = 0;
		while( r=destroy() ){
			ans += r;
			
		}
		cout << ans << endl;
	}
}