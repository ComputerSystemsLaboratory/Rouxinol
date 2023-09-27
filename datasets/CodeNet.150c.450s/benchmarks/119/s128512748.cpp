
#include <iostream>
using namespace std;

int CountIsland(int w,int h,int c[][50]);
void CheckIsland(int w,int h,int c[][50]);
void debugg(int w,int h,int c[][50]);
int main(){
	int w,h;
	int c[50][50];
	while(true){
		for(int i=0;i<50;i++){
			for(int j=0;j<50;j++){
				c[i][j]=-1;
			}
		}
		cin >> w >> h;
		if(w==0&&h==0){break;}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >> c[i][j];
			}
		}
		cout << CountIsland(w,h,c) << endl;
	}
	return 0;
}
int CountIsland(int w,int h,int c[][50]){
	int r=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(c[i][j]==1){
				r++;
				CheckIsland(j,i,c);
			}
		}
	}
	return r;
}
void debugg(int w,int h,int c[][50]){
	cout << endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
void CheckIsland(int w,int h,int c[][50]){
	c[h][w] = 0;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(i == -1 && h == 0 || j == -1 && w == 0 || i == 1 && h == 49 || j == 1 && w == 49||i == 0 && j == 0){continue;}
			if(c[i+h][j+w]==1){
				CheckIsland(j+w,i+h,c);
			}
		}
	}
}