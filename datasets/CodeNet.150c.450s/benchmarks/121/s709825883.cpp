/*************************************************************************
    > File Name: aoj0118.cpp
    > Author:    WArobot 
    > Blog:      http://www.cnblogs.com/WArobot/ 
    > Created Time: 2017??´06???21??\ ????????? 19??¶09???51?§?
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 110;

char M[MAX_N][MAX_N];
int  vis[MAX_N][MAX_N];
int  dx[4] = { 0 , 0 , 1 , -1 } , dy[4] = { -1 , 1 , 0 , 0 };
int  n , m , cnt;

void DFS(int x,int y,char c){
	for(int i = 0 ; i < 4 ; i++){
		int tx = dx[i] + x , ty = dy[i] + y;
		if( tx < 0 || tx >= n || ty < 0 || ty >=m )	continue;
		if( vis[tx][ty] == 0 && M[tx][ty] == c ){
			vis[tx][ty] = cnt;
			DFS(tx,ty,M[tx][ty]);
		}
	}
	return;
}
int main(){
	while(~scanf("%d%d",&n,&m)){
		
		if( n == 0 && m == 0 )	break;
		memset(vis,0,sizeof(vis));
		memset(M,0,sizeof(M));
		cnt = 0;

		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++)
				cin>>M[i][j];
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				if( vis[i][j] == 0 ){
					vis[i][j] = ++cnt;
					DFS(i,j,M[i][j]);
				}
			}
		}
		/*for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++)	printf("%2d ",vis[i][j]);
			puts("");
		}*/
		printf("%d\n",cnt);
	}
	return 0;
}