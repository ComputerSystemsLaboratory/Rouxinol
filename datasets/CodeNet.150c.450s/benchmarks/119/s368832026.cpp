#include<iostream>
using namespace std;
bool ban[52][52];
	void dfs(int x,int y){
		ban[y][x]=0;
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if(ban[y+i][x+j]==true){
					dfs(x+j,y+i);
				}
			}
		}
	}
int main(){
	int w,h;
	while(cin>>w>>h,h+w!=0){
		for(int i=0;i<h;i++)ban[i][0]=0,ban[i][h+1]=0;//番兵
		for(int i=0;i<w;i++)ban[0][i]=0,ban[0][w+1]=0;//
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++)cin>>ban[i][j];
		}
	int cnt=0;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(ban[i][j]==true){
				dfs(j,i);
				cnt++;
			}
		}	
	}
		cout<<cnt<<endl;
	}
	return 0;
}