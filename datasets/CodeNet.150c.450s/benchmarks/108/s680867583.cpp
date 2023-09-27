#include <cstdio>
#include <queue>
using namespace std;

int dt[101][101];
int d[101];

int n;
int t=0;
void bfs(int s){
	queue<int> que;
	d[s]=0;
	que.push(s);
	while(!que.empty()){
		int nxt=que.front();que.pop();
		for(int i=1;i<=n;i++){
			if(dt[nxt][i]&&d[i]==-1){
				que.push(i);
				d[i]=d[nxt]+1;
			}
		}
	}
}
int main(){
	int fi, v, g;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		d[i]=-1;
	for(int i=1;i<=n;i++){
		scanf("%d %d",&fi,&v);
		for(int j=1;j<=v;j++){
			scanf("%d",&g);
			dt[fi][g]=1;
		}
	}
	d[1]=0;
	bfs(1);
			
	for(int i=1;i<=n;i++){
		printf("%d %d\n",i,d[i]);
	}
	return 0;
}