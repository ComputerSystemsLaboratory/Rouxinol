#include <iostream>
#include <stack>
using namespace std;

const int maxv = 100 + 15;
char maze[maxv][maxv];
struct po{
	int x, y;
};
stack<po> nxt;
int r, c, ans;
const int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
bool judge(int x, int y){
	return (x>=1)&&(x<=r)&&(y>=1)&&(y<=c);
}
void dfs(po ori, char ch){
	nxt.push(ori);
	maze[ori.x][ori.y] = '0';
	while(!nxt.empty()){
		po tem = nxt.top();
		nxt.pop();
		for(int i = 0; i < 4; i++){
			po now=po{tem.x+dx[i],tem.y+dy[i]};
			if(judge(now.x,now.y)&&maze[now.x][now.y]==ch)
			maze[now.x][now.y]='0',nxt.push(now);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	while(cin >> r >> c, (r|| c)){
		for(int i = 1; i <= r; i++)
		for(int j = 1; j <= c; j++) cin >> maze[i][j];
		ans = 0;
		for(int p = 1; p <= r; p++)
		for(int q = 1; q <= c; q++) if(maze[p][q] != '0')
		ans++, dfs(po{p, q}, maze[p][q]);
		cout << ans << "\n";
	}
	return 0;
}