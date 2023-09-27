#include <bits/stdc++.h>
using namespace std;
int ans = 1e9;
int H,W;
int mp[52][52];
int nx,ny;
void func(int y,int x){
	//cout << y << ' ' <<x<<endl;
	if(mp[y][x] == 1){
		mp[y][x] = 2;
		func(y,x);
	}
	if(mp[y+1][x] == 1){
		mp[y+1][x] = 2;
		func(y+1,x);
	}
	if(mp[y][x+1] == 1){
		mp[y][x+1] = 2;
		func(y,x+1);
	}
	if(mp[y+1][x+1] == 1){
		mp[y+1][x+1] = 2;
		func(y+1,x+1);
	}
	if(mp[y-1][x] == 1){
		mp[y-1][x] = 2;
		func(y-1,x);
	}
	if(mp[y][x-1] == 1){
		mp[y][x-1] = 2;
		func(y,x-1);
	}
	if(mp[y-1][x-1] == 1){
		mp[y-1][x-1] = 2;
		func(y-1,x-1);
	}
	if(mp[y+1][x-1] == 1){
		mp[y+1][x-1] = 2;
		func(y+1,x-1);
	}
	if(mp[y-1][x+1] == 1){
		mp[y-1][x+1] = 2;
		func(y-1,x+1);
	}
}
void findL(){
	nx = -1;ny = -1;
	for(int i = 1; i <= H; i++){
		for(int j = 1; j <= W; j++){
			if(mp[i][j] == 1){
				nx = j,ny = i;
				//cout <<nx<<ny<<endl;
				i = H; j = W;
			}
		}
	}
}
int main(){
	cin >> H>>W;
	while(W!=0||H!=0){
		for(int i = 0; i < 52;i++){
			for(int j = 0; j < 52; j++){
				mp[i][j] = 0;
			}
		}
		for(int i = 1; i <= H; i++){
			for(int j = 1; j <= W; j++){
				cin >> mp[i][j];
			}
		}
		int c = 0;
		findL();
		while(nx != -1 && ny != -1){
			func(ny,nx);
			c++;
			findL();
		}
		cout << c << endl;
		cin >> W >> H;
	}
	return 0;
}
