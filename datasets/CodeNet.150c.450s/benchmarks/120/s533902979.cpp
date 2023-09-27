//============================================================================
// Name        : Osenbei
// Author      : seaupnice
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<bits/stdc++.h>
using namespace std;

const int MAX_R=10;
const int MAX_C=10000;
bitset<MAX_C> maze[MAX_R];
int R,C;
int ans;
/* dfs()全排列*/
void dfs(int k){
	if(k==C){
		int result=0;
		for(int i=0; i<R; i++){
			int upnum=0;
			for(int j=0; j<C; j++){
				if(maze[j][i]){
					upnum++;
				}
			}
			result += max(upnum,C-upnum);
		}
		ans = max(ans, result);
		return;
	}
	dfs(k+1);
	maze[k].flip();
	dfs(k+1);
}

int main(){
	while((cin >> C >> R) && C && R){
		for(int i=0; i<C; i++){
			for(int j=0; j<R; j++){
				int a;
				scanf("%d",&a);
				maze[i][j] = (a==1?true:false);
			}
		}
		ans=0;
		dfs(1);
		cout << ans << endl;
	}
	return 0;
}

