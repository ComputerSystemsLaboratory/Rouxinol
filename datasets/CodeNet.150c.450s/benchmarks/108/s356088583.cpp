#include<cstdio>
#include<queue>
using namespace std;
static const int INF=(1<<21);
static const int MAXN=101;
int main()
{
	int n,m[MAXN][MAXN],i,j,u,k,v,l,t[MAXN],c;
	queue<int> q;
	bool used[MAXN]={};
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			m[i][j]=INF;
		}
	}
	for(i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d",&v);
			m[u][v]=1;
		}
	}
	t[1]=0;
	used[1]=true;
	q.push(1);
	while(!q.empty()){
		l=q.front();
		q.pop();
		for(i=1;i<n+1;i++){
			if(m[l][i]==1&&used[i]==false){
				q.push(i);
				used[i]=true;
				t[i]=t[l]+1;
			}
		}
	}
	for(i=1;i<n+1;i++){
		if(used[i]==true){
			printf("%d %d\n",i,t[i]);
		}
		else{
			printf("%d -1\n",i);
		}
	}
	return 0;
}