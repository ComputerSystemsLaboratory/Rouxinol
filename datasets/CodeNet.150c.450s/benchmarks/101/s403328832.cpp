#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
 
struct node {
	int id;
	vector<int> rel;
};

node* nodes;

void dfs(int start, int cur, int* h){
	if(h[cur] == -1){
		h[cur] = start;
		for(int i = 0; i < nodes[cur].rel.size(); i++){
			dfs(start, nodes[cur].rel[i], h);
		}
	}
}

int main() {
	int n, m, q;
	scanf("%d %d", &n, &m);
	 
	nodes = new node[n];
	for(int i = 0; i < n; i++){
		nodes[i].id = i;
	}
	while(m--){
		int l, r;
		scanf("%d %d", &l, &r);
		nodes[l].rel.push_back(r);
		nodes[r].rel.push_back(l);
	}
	
	int *h = new int[n];
	for(int i = 0; i < n; i++){
		h[i] = -1;
	}
	for(int i = 0; i < n; i++){
		dfs(i, i, h);
	}
	
	scanf("%d", &q);
	while(q--){
		int l, r;
		scanf("%d %d", &l, &r);
		printf("%s\n", h[l]==h[r] ? "yes" : "no");
	}
	return 0;
}