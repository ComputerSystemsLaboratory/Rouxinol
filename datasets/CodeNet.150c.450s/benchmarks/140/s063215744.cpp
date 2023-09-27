#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 200000 + 5;

struct node {
	int x;
	int y;
	int v;
}r[maxn];

int n,m;
int f[maxn];

bool cmp(node a,node b){
	return a.v < b.v;
}

int find(int x){
	if(f[x] == x)return x;
	else return f[x] = find(f[x]);
}

int Kruskal(){
	int ans = 0;
	for(int i = 1;i <= n; i++)f[i] = i;
	sort(r+1,r+m+1,cmp);
	for(int i = 1;i <= m; i++){
		int x = find(r[i].x),y = find(r[i].y);
		if(x != y){
			ans += r[i].v;
			f[x] = y;
		}
	}
	return ans;
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= m; i++)scanf("%d%d%d",&r[i].x,&r[i].y,&r[i].v);
	int ans = Kruskal();
	printf("%d\n",ans);
} 