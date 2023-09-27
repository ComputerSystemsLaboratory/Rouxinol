#include <iostream>
#include <cstdio>
using namespace std;

bool done[100][100];
int H=1,W;
char field[100][100];
int ans;

int solve(int i,int j){
	if(done[i][j]==1 || i<0 || H<=i || j<0 || W<=j) return 0;
	done[i][j]=1;
	int x[4]={1,0,-1,0},y[4]={0,1,0,-1};
	for(int k=0;k<4;k++){
		if(field[i][j]==field[i+x[k]][j+y[k]]){
			solve(i+x[k],j+y[k]);
		}
	}
	return 0;
}

int main(){
	cin>>H>>W;
	while(H){
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cin>>field[i][j];
			}
		}
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(!done[i][j]){
					ans++;
					solve(i,j);
				}
			}
		}
		cout<<ans<<endl;
		ans=0;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				done[i][j]=0;
			}
		}
		cin>>H>>W;
	}
	return 0;
}