#include<iostream>
using namespace std;

char nyuryoku[100][100];
int h,w;

void fun(int y,int x,char masume){
	if((x<0)||(w<=x)||(y<0)||(h<=y))
		return;
	if(masume==nyuryoku[y][x])
		nyuryoku[y][x]='x';
	else
		return;
	fun(y+1,x,masume);
	fun(y-1,x,masume);
	fun(y,x+1,masume);
	fun(y,x-1,masume);
}

int main(){
	while(cin >> h >> w,h){
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >>nyuryoku[i][j];
			}
		}
		int count=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(nyuryoku[i][j]!='x'){
					fun(i,j,nyuryoku[i][j]);
					count++;
				}
			}
		}
		cout << count << endl;
	}
}