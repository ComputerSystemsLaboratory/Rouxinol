#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int G[10010][10010];
int cost[10010],src[10010],dst[10010];

int P[10010];
int root(int a);
int is_same_set(int a,int b);
void unite(int a,int b);

int main() {
	int N,a;
	cin >> N;
	for(int i=0; i<N;i++) {
		for(int j=0;j<N;j++) {
			cin >> a;
			G[i][j] = a;
		}
	}
	int hcon = 1;
	int M = 0;
	pair<int,int> edges[10010];

	for(int r=0;r<N;r++) {
		for (int c=0;c<hcon;c++) {
			if(G[r][c] > -1) {
				cost[M] = G[r][c];
				src[M] = r;
				dst[M] = c;
				edges[M] = make_pair(cost[M],M);
				M+=1;
			}
		}
		hcon++;
	}
	sort(edges,edges+M);



	for(int i=0;i<N;i++) P[i] = i;

	int answer = 0;
	for(int i=0;i<M;i++) {
		if(!is_same_set(src[edges[i].second],dst[edges[i].second])) {
			unite(src[edges[i].second],dst[edges[i].second]);
			answer += edges[i].first;
			//cout << answer << endl;
		}
	}
	cout << answer << endl;;
}

int root(int a) { 
	if (P[a] == a) return a; 
	return (P[a] = root(P[a])); 
}
int is_same_set(int a, int b) { 
	if(root(a) == root(b)) {
		return 1;
	} else {
		return 0;
	}
}
void unite(int a, int b) { 
	P[root(a)] = root(b);
}