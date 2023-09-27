#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
char data[110][110];
int c;
int m,n;
void dfs(int x,int y,char ch) {
	data[x][y]='.';
	if(x-1>=0&&data[x-1][y]==ch) {
		dfs(x-1,y,ch);
	}

	if(x+1<n&&data[x+1][y]==ch) {
		dfs(x+1,y,ch);
	}

	if(y-1>=0&&data[x][y-1]==ch) {
		dfs(x,y-1,ch);
	}

	if(y+1<m&&data[x][y+1]==ch) {
		dfs(x,y+1,ch);
	}
}

int main() {

	while(scanf("%d%d",&n,&m)!=EOF) {
		if(m==0&&n==0) break;
		int a,b;
		c=0;
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
		scanf("\n%c",&data[i][j]);
//				cin>>data[i][j];
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++) {
				if(data[i][j]!='.') {
					c++;
					dfs(i,j,data[i][j]);
				}

			}
		printf("%d\n",c);



	}
	return 0;
}

