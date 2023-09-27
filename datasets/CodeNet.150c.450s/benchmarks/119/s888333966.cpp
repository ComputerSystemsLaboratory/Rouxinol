#include<iostream>
using namespace std;
int a[51][51]={},d[51][51]={},ans=0,w,h,dx[8]={-1,0,1,-1,1,-1,0,1},dy[8]={-1,-1,-1,0,0,1,1,1};
int f(int y,int x){
	if(d[y][x]==1 && a[y][x]==0){
		a[y][x]=1;
		for(int i=0;i<8;i++){
			if(y+dy[i]>-1 && y+dy[i]<h && x+dx[i]>-1 && x+dx[i]<w){
				if(a[y+dy[i]][x+dx[i]]==0)
				f(y+dy[i],x+dx[i]);
			}
		}
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	while(cin>>w>>h,w){
		ans=0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				a[i][j]=0;
				cin>>d[i][j];
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(f(i,j))
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}