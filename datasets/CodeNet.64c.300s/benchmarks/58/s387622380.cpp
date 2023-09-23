#include<iostream>
using namespace std;

int h,w;
char s[100][100];

void dfs(int y,int x,char f){
	if((x<0)||(w<=x)||(y<0)||(h<=y)){
		return;
	}
	if(s[y][x]==f){
		s[y][x]='x';
	}else{
		return;
	}
	dfs(y,x+1,f);
	dfs(y,x-1,f);
	dfs(y+1,x,f);
	dfs(y-1,x,f);
}

int main(){
	while(cin >> h >> w,h){
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >> s[i][j];
			}
		}
		int count=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(s[i][j]=='x');
				else{
					dfs(i,j,s[i][j]);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}