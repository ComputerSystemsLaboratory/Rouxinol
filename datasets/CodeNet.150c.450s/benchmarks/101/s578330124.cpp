#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n,m,q,k;
	int s,t;
	int i,j;
	queue<int> nq;
	vector<vector<int> > node;
	vector<int> ngrp;

	scanf("%d%d",&n,&m);
	node.resize(n);
	ngrp.resize(n);

	for(i=0;i<m;++i) {
		scanf("%d%d",&s,&t);
		node[s].push_back(t);
		node[t].push_back(s);
	}

	for(i=0;i<n;++i) {
		ngrp[i]=-1;
	}

	for(i=0; i<n; ++i) {
		if(ngrp[i]==-1) {
			nq.push(i);
			ngrp[i]=i;
			while(!nq.empty()) {
				k=nq.front();
				for(j=0;j<(int)node[k].size();++j) {
					if(ngrp[node[k][j]]==-1) {
						ngrp[node[k][j]]=i;
						nq.push(node[k][j]);
					}
				}
				nq.pop();
			}
		}
	}
	scanf("%d",&q);
	for(i=0;i<q;++i) {
		scanf("%d%d",&s,&t);
		printf((ngrp[s]==ngrp[t])?"yes\n":"no\n");
	}
	return 0;
}