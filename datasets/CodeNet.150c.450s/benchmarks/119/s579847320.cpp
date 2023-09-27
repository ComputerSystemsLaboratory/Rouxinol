#include <iostream>
using namespace std;

int ans,w,h,I[55][55];//??????

void dfs(int x,int y){
	I[x][y]=0;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(I[x+i][y+j]==1)dfs(x+i,y+j);
		}
	}
}
int main(){
	while(1){
		cin>>w;
		cin>>h;
		if(w==0&&h==0)break;
		ans=0;
		for(int i=0;i<55;i++){
			for(int j=0;j<55;j++){
				I[i][j]=0;
			}
		}
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				cin>>I[i][j];
			}
		}
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				if(I[i][j]==1){
					dfs(i,j);
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}