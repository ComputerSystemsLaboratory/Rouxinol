#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAXN 1000+2
long long map1[MAXN][MAXN];
int n,m;
void input(){
	cin>>n>>m;
	int we,xx,yy;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			map1[i][j]=10000000000000000;
		}
	}
	for(int i=0;i<n;++i){
		map1[i][i]=0;
	}
	for(int i=0;i<m;++i){
		cin>>xx>>yy>>we;
		map1[xx][yy]=we;
	}
}
void floyd(){
	for(int k=0;k<n;++k){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(map1[i][k]<10000000000000000&&map1[k][j]<10000000000000000){
				    map1[i][j]=min(map1[i][k]+map1[k][j],map1[i][j]);
				}
			}
		}
	}
	for(int i=0;i<n;++i){
		if(map1[i][i]<0) {
			cout<<"NEGATIVE CYCLE"<<endl;
	        return;
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n-1;++j){
			if(map1[i][j]<10000000000000000) cout<<map1[i][j]<<" ";
		    else cout<<"INF"<<" ";
		}
		if(map1[i][n-1]<10000000000000000) cout<<map1[i][n-1]<<endl;
	    else cout<<"INF"<<endl;
	}
}
int main(){
	input();
	floyd();
	return 0;
}