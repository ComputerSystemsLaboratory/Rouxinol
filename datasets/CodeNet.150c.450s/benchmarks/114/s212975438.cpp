#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int m,n,x,ans;
int P[100+10],edge1[10000+10],edge2[10000+10];


int root(int a){
	if (P[a] == a) return a;
	return (P[a] = root(P[a]));
}

bool same(int a, int b){
	return root(a)==root(b);
}
	
void unite(int a, int b){
	P[root(a)] = root(b);
}

int main() {
	pair<int,int> edges[10000+10];
	cin >> n;
	
	for (int i=1; i<=n; i++){
		P[i] = i;
	}
	
	m = 0;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin >> x;
			if (x>-1){
				edge1[m] = i;
				edge2[m] = j;
				edges[m] = make_pair(x, m);
				m+=1;
			}
		}
	}
	
	sort(edges, edges+m);
	n=1;
	for (int i=0; i<m; i++){
		if (n>=m) break;
		if (!same(edge1[edges[i].second], edge2[edges[i].second])){
			unite(edge1[edges[i].second], edge2[edges[i].second]);
			ans += edges[i].first;
			n+=1;
		}
	}
	
	cout << ans << endl;
	
}