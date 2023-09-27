#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int N=1000;

int LCS(string x,string y){
	int c[N+1][N+1],LCSlen=0;
	int m=x.size();
	int n=y.size();
	x=' '+x;
	y=' '+y;
	for(int i=1;i<=m;i++) c[i][0]=0;
	for(int j=1;j<=n;j++) c[0][j]=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(x[i]==y[j])
			c[i][j]=c[i-1][j-1]+1;
			else
			c[i][j]=max(c[i][j-1],c[i-1][j]);
			LCSlen=max(LCSlen,c[i][j]);
		}
	}
	return LCSlen;
}

int main(){
	string x,y;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>x;
		cin>>y;
		printf("%d\n",LCS(x,y));
	}
}