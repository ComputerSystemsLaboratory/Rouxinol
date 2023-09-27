#include<iostream>
#include<cstdio>
using namespace std;
int field[52][52]={};
void umeru(int y,int x){
	field[y][x]=0;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(field[y+i][x+j])	umeru(y+i,x+j);
		}
	}
}
int main(){
	while(1){
		int w,h,cnt=0;
		cin >> w >> h;
		if(!w&&!h)	break;
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				cin >> field[i][j];
			}
		}
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				if(field[i][j]){
					cnt++;
					umeru(i,j);
				}
			}
		}
		cout << cnt << endl;
	}
}
