//aoj0118
#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<int(n);i++)
int R,C;
char field[100][100];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
void dfs(int row, int col, char c){
	if(row==-1||row>=R) return ;
	if(col==-1||col>=C) return ;
	if(field[row][col]!=c) return;
	field[row][col]=' ';
	forn(i,4){
		dfs(row+dx[i],col+dy[i],c);
	}
	return ;
}
int main(){
	cin>>R>>C;
	while(R>0&&C>0){
		forn(i,R){
			forn(j,C){
				cin>>field[i][j];
			}
		}
		int ans = 0;
		forn(i,R){
			forn(j,C){
				if(field[i][j]!=' '){
					dfs(i,j, field[i][j]);
					ans++;
				}
			}
		}
		cout<<ans<<endl;
		cin>>R>>C;
	}
	return 0;
}