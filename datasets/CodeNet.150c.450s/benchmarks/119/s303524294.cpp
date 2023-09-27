#include <iostream>
using namespace std;
int cnt,w,h;
int map[51][51];
void check(int i,int j){
	if(map[i][j]!=1)return;
	map[i][j]=2;
	if(i>0)check(i-1,j);
	if(i<h-1)check(i+1,j);
	if(j>0)check(i,j-1);
	if(j<w-1)check(i,j+1);
	if(i>0&&j>0)check(i-1,j-1);
	if(i>0&&j<w-1)check(i-1,j+1);
	if(i<h-1&&j>0)check(i+1,j-1);
	if(i<h-1&&j<w-1)check(i+1,j+1);
}


int main(){
	while(1){
		cin >>w >>h;
		if(!(w||h))break;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >>map[i][j];
			}
		}
		cnt=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(map[i][j]==1){
					cnt++;
					check(i,j);
				}
			}
		}
	cout << cnt<<endl; 

	}
}