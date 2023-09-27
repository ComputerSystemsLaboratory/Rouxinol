#include<iostream>
using namespace std;

int h,w;
char s[20][20];

void dfs(int y,int x){
	if((x<0)||(w<=x)||(y<0)||(h<=y)){
		return;
	}
	if((s[y][x]=='.')||(s[y][x]=='@')){
		s[y][x]='x';
	}else{
		return;
	}
	dfs(y,x+1);
	dfs(y,x-1);
	dfs(y+1,x);
	dfs(y-1,x);
}

int main(){
	while(cin >> w >> h,h){
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >> s[i][j];
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(s[i][j]!='@');
				else{
					dfs(i,j);
					j=w;
					i=h;
				}
			}
		}
		int count=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(s[i][j]=='x')
					count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}