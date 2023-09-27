#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int a,b;
char field[16][16];

class Info{
public:
	int x,y;
};

int bfs(void){
	queue<Info> q;
	Info tmp = {0,0};
	int dx[4] = {0,1}, dy[4] = {1,0};
	int ans = 0;

	q.push(tmp);
	while(!q.empty()){
		tmp = q.front(); q.pop();

		if(tmp.x==a-1 && tmp.y==b-1){
			ans++;
			continue;
		}

		for(int i=0;i<2;i++){
			int nx = tmp.x + dx[i];
			int ny = tmp.y + dy[i];

			if(0<=nx && nx<a && 0<=ny && ny<b && field[ny][nx]){
				Info tmp2 = {nx,ny};
				q.push(tmp2);
			}
		}
	}

	return ans;
}

int main(void){
	int i,j,n,x,y;

	while(cin>>a>>b && (a || b)){
		cin>>n;
		memset(field,1,sizeof(field));

		while(n--){
			cin>>x>>y;
			field[y-1][x-1] = 0;
		}

		cout<<bfs()<<endl;
	}

	return 0;
}