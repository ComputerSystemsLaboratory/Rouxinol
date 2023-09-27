#include <iostream>
#include <cstdio>
#include <cstring>
#define MAX 105
#define INF 1000000
using namespace std;

int n;
int M[MAX][MAX];
int d[MAX];
int p[MAX];
int color[MAX];//0 表示未进入 -1 表示在之中 1 表示已出去

int prim() {
	int u,min,i,j;
	d[0]=0;
	p[0]=-1;
	while(1) {
		min=INF;
		u=-1;
		for(i=0; i<n; i++) {
			if(min>d[i] && color[i]!=1) {
				u=i;
				min=d[i];
			}
		}
		if(u==-1) break;
		color[u]=1;
		for(j=0; j<n; j++) {
			if(color[j]!=1 && M[u][j]!=INF) {
				if(d[j]>M[u][j]) {
					d[j]=M[u][j];
					color[j]=-1;
					p[j]=u;
				}
			}
		}
	}
	int sum=0;
	for(i=0; i<n; i++) {
		if(p[i] != -1) sum+=M[i][p[i]];
	}
	return sum;
}

int main() {
	int i,j,a;
	memset(color,0,sizeof(color));
	memset(d,INF,sizeof(d));
	memset(p,-1,sizeof(p));
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&a);
			if(a==-1) a=INF;
			M[i][j]=a;
		}
	}
	cout<<prim()<<endl;
	return 0;
}
