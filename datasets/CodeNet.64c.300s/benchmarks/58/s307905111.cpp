#include<iostream>
#include<string>
using namespace std;
int map[101][101];
int h,w;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

void REC(int y,int x,int type){
	map[y][x]=0;
	for(int i=0;i<4;i++){
		if(y+dy[i]>=0&&y+dy[i]<h&&x+dx[i]>=0&&x+dx[i]<w){
		if(map[y+dy[i]][x+dx[i]]==type)
			REC(y+dy[i],x+dx[i],type);
		}
	}
}
int main(){
	while(true){
	cin>>h>>w;
	if(h==0&&w==0)
		break;
	char z;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>z;
			if(z=='#')
				map[i][j]=1;
			if(z=='@')
				map[i][j]=2;
			if(z=='*')
				map[i][j]=3;
		}
	}
	int count=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(map[i][j]!=0){
				count++;
				REC(i,j,map[i][j]);
			}
		}
	}
	cout<<count<<endl;
	}
	return 0;
}