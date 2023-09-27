#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
int field[10][5]={};
int sum=0;
void game(int h){
	int newfield[11][5]={};
	for(int y=0;y<h;y++){
		newfield[y][0]=field[y][0];
		newfield[y][4]=field[y][4];
		for(int x=1;x<4;x++){
			if(field[y][x-1]==field[y][x]&&field[y][x+1]==field[y][x]){
				newfield[y][x-1]-=1000;
				newfield[y][x]-=1000;
				newfield[y][x+1]-=1000;
			}
			else{
				newfield[y][x]+=field[y][x];
			}
		}
		for(int i=0;i<5;i++){
			if(newfield[y][i]<0)	newfield[y][i]=0;
		}
	}
	for(int i=0;i<h;i++){
		for(int y=h-1;y>=0;y--){
			for(int x=0;x<5;x++){
				if(newfield[y][x]==0){
					for(int Y=y;Y>=0;Y--)
						if(Y==0)	newfield[Y][x]=0;
						else{
							newfield[Y][x]=newfield[Y-1][x];
						}
				}
			}
		}
	}
	//cout << endl;
	for(int y=0;y<h;y++){
		//cout << endl;
		for(int x=0;x<5;x++){
			field[y][x] = newfield[y][x];
			//cout << field[y][x] << ' ';
		}
	}
}
int main(void){
	while(1){
		int H,sum=0,sum2=0;
		cin >> H;
		if(!H)	break;
		for(int y=0;y<H;y++){
			for(int x=0;x<5;x++){
				cin >> field[y][x];
				sum+=field[y][x];
			}
		}
		for(int i=0;i<H;i++)	game(H);
		for(int i=0;i<H;i++){
			for(int j=0;j<5;j++)	sum2+=field[i][j];
		}
		cout << sum-sum2 << endl;
	}
	return 0;
}
