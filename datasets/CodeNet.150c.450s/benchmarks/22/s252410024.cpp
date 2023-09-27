#include<iostream>
#include<cstdio>
#include<queue>
#include<string>
#include<cstring>

using namespace std;

#define MAXM 500010
#define MAXN 10010
#define ANS_MAX 2147483647
#define INF 1<<27
struct EDGE{
	int next;
	int to;
	int w;
//	EDGE(int _next,int _to,int _w) : next(_next) ,to(_to),w(_w){
//	};
};

EDGE edge[MAXM];

int n,m ,st,cnt;
int head[MAXN];

int d[MAXN],outqueue[MAXN];
bool inq[MAXN];
queue<int> Q;

void Add(int u,int v,int w){
	edge[++cnt].next = head[u];
	edge[cnt].to = v;
	edge[cnt].w = w;
	head[u] = cnt;
}


inline int Read(){
	char c;
	int ans = 0;
	bool Sign = false;
	while(!isdigit(c=getchar()) && c != '-');
	if(c == '-') {
		Sign = true;
		c = getchar();
	}
	do {
		ans = (ans<<3) + (ans<<1) + (c - '0');
	} while(isdigit(c=getchar()));
	return Sign ? -ans : ans;
}

void read(){
	int x,y,w;
	n = Read();
	m = Read();
	st = Read();
	for(int i=1;i<=m;i++){
		x = Read();
		y = Read();
		w = Read();
		Add(x,y,w);
	}
}
int SPFA(int x){
	int k;
	for(int i=0;i<=n;i++) d[i] = ANS_MAX;
	d[x] = 0;
	Q.push(x);
	inq[x] = true;
	while(!Q.empty()){
		k = Q.front();
		Q.pop();
		inq[k] = false;
		outqueue[k]++;
		if(outqueue[k]>n) return 0;
		if(d[k] == ANS_MAX) continue;
		for(int i =head[k];i!=0;i=edge[i].next){
			int j = edge[i].to;
			if(d[j]>d[k]+edge[i].w){
				d[j] = d[k] + edge[i].w;
				if(!inq[j]){
					Q.push(j);
					inq[j] = true;
				}
			}
		}
	}
	return 1;
	
}

int main(){
	memset (outqueue,0,sizeof(outqueue));
	read();
	if(SPFA(st)) 
	for(int i=0; i<n; i++) 
	{
		if(d[i]==ANS_MAX) cout<<"INF\n";
		else
		printf("%d\n", d[i]);
	}
	else
	cout<<"NEGATIVE CYCLE\n";
	return 0;
}
