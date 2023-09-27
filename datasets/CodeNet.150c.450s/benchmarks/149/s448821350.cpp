#include<iostream>
#include<cstdio>
#include<algorithm>

#define MAX 10000

using namespace std;

int p[MAX];
int ranks[MAX];

void makeset(int x){
	p[x]=x;
	ranks[x]=0;
}

void link(int x, int y){
	if(ranks[x]>ranks[y])
	p[y]=x;
	else{
		p[x]=y;
		if(ranks[x]==ranks[y])
		ranks[y]++;
	}
}

int findSet(int x){
	if(x!=p[x])
	p[x]=findSet(p[x]);
	return p[x];
}

void unite(int x, int y){
	link(findSet(x),findSet(y));
}

bool same(int x, int y){
	return findSet(x)==findSet(y);
}

int main(){
	int n,q;
	int com,x,y;
	bool ans;
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++){
		makeset(i);
	}
	for(int i=0;i<q;i++){
		scanf("%d %d %d",&com,&x,&y);
		if(com==0)
		unite(x,y);
		else{
			ans = same(x,y);
			printf(ans==true ? "1\n" : "0\n");
		}
	}
}