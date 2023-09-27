#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

#define sint(i) scanf("%d",&i);
#define sintt(i,j) scanf("%d%d",&i,&j);
#define sinttt(i,j,k) scanf("%d%d%d",&i,&j,&k);
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int masu[17][17];
int ura[17][17];
int xx,yy;

int saiki(int x,int y){
	if(x<1||y<1){
		return 0;
	}
	if(ura[x][y]==1){
		return masu[x][y]=0;
	}
	
	if(masu[x][y]!=-1){
		return masu[x][y];
	}
	
	if(x==1 && y==1){
		return 1;
	}
	
	return masu[x][y]=saiki(x-1,y)+saiki(x,y-1);
}

int main(){
	while(1){
		sintt(xx,yy);
		if(xx==0)break;
		int n;
		sint(n);
		rep(i,17)rep(j,17){
			ura[i][j]=0;
			masu[i][j]=-1;
		}
		rep(i,n){
			int a,b;
			sintt(a,b);
			ura[a][b]=1;
		}
		
		printf("%d\n",saiki(xx,yy));
	}
}