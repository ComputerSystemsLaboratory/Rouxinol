#include <bits/stdc++.h>
using namespace std;

vector<int> G[26];
int d[26];
void pre(int k){
	if(G[k].size() == 0)return ;
	printf(" %d", k);
	if(G[k][0] != -1)pre(G[k][0]);
	if(G[k][1] != -1)pre(G[k][1]);
	return ;
}

void in(int k){
	if(G[k].size() == 0)return ;
	if(G[k][0] != -1)in(G[k][0]);
	printf(" %d", k);
	if(G[k][1] != -1)in(G[k][1]);
	return ;
}

void pos(int k){
	if(G[k].size() == 0)return ;
	if(G[k][0] != -1)pos(G[k][0]);
	if(G[k][1] != -1)pos(G[k][1]);
	printf(" %d", k);
	return ;
}

int main(){
	int n, a, b, c, t = 0;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d%d%d", &a, &b, &c);
		G[a].push_back(b);
		G[a].push_back(c);
		d[b]++;d[c]++;
	}
	
	for(int i = 0;i < n;i++)if(!d[i])t = i;
	
	printf("Preorder\n");
	pre(t);
	printf("\nInorder\n");
	in(t);
	printf("\nPostorder\n");
	pos(t);
	printf("\n");
	
	return 0;
}
