#include<iostream>
using namespace std;
#define MAXSIZE 105
int h,w;
char map[MAXSIZE][MAXSIZE];
int sum;
void dfs(int x,int y) {
	int d[4][2]= {{-1,0},{0,-1},{1,0},{0,1}};
	char c = map[x][y];
	map[x][y]='.';
	for(int k=0; k<4; k++) {
		int dx=x+d[k][0];
		int dy=y+d[k][1];
		if(dx<0||dx>=h||dy<0||dy>=w||map[dx][dy]!=c) {
			continue;
		}

		dfs(dx,dy);
	}

}
int main() {
	while(true) {
		cin>>h>>w;
		if(h==0&&w==0) break;
		for(int i=0; i<h; i++)
			for(int j=0; j<w; j++) {
				cin>>map[i][j];
			}
		sum=0;


		for(int i=0; i<h; i++)
			for(int j=0; j<w; j++) {
				if(map[i][j]!='.') {
					dfs(i,j);
					sum++;
				}

			}

		cout<<sum<<endl;
	}

}