#include<iostream>
using namespace std;

string map[21];
int sx,sy,ans,x,y;

void search(int xx,int yy){
	ans++;
	map[yy][xx]='#';
	if(xx<x-1&&map[yy][xx+1]=='.')search(xx+1,yy);
	if(xx>0&&map[yy][xx-1]=='.')search(xx-1,yy);
	if(yy<y-1&&map[yy+1][xx]=='.')search(xx,yy+1);
	if(yy>0&&map[yy-1][xx]=='.')search(xx,yy-1);
}

int main(){
	while(cin>>x>>y,x||y){
		ans=0;
		for(int i=0;i<y;i++)cin>>map[i];
		for(int i=0;i<y;i++){
			for(int j=0;j<x;j++){
				if(map[i][j]=='@')sy=i,sx=j;
			}
		}
		search(sx,sy);
		cout<<ans<<endl;
	}
}