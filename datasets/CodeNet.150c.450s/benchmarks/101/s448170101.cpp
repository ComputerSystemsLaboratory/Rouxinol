#include <iostream>
#include <vector>
#include <stack>
#include <cstdio>
#define MAX 100005
#define NIL -1 
using namespace std;

int color[MAX];
int n,m,s,t,q;
vector<int> G[MAX];

void dfs(int x, int y) {
	stack<int> S;
	S.push(x);
	color[x]=y;
	while(!S.empty()) {
		int tmp=S.top();
		S.pop();
		for(int i=0;i<G[tmp].size();i++) {
			int l=G[tmp][i];
			if(color[l]==NIL) {
				color[l]=y;
				S.push(l);
			}
		}
	}
}

void assigncolor() {
	int num=0;
	for(int i=0;i<n;i++) color[i]=NIL;
	for(int i=0;i<n;i++) {
		if(color[i]==NIL) dfs(i,num++);
	}
}

int main() {
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++) {
		scanf("%d %d",&s,&t);
		G[s].push_back(t);
		G[t].push_back(s);
	}
	
	assigncolor();
	
	scanf("%d",&q);
	for(i=0;i<q;i++) {
		scanf("%d %d",&s,&t);
		if(color[s]==color[t]) printf("yes\n");
		else printf("no\n");
	}
	
	return 0;
}
