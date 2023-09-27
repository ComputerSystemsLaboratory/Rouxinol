#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int n,m,w,r,c;
int P[10010] = {0};
void init(int N){
	for(int i=0;i<=N;++i) P[i] = i;
}

int root(int a){
	if(P[a] == a) return a;
	return (P[a] = root(P[a]));
}

bool is_same_set(int a,int b){
	return root(a) == root(b);
}

void unite(int a, int b){
	P[root(a)] = root(b);
}


int main(){
	cin >> n >> m;
	init(n);
	//int M = 0;
	int cost[100010],src[100010],dst[100010];
	vector< pair<int,int> > edges;
	for(int i=0;i<m;i++){
		cin >> r >> c >> w;
		cost[i] = w;
		src[i] = r;
		dst[i] = c;
		pair<int,int> edge = make_pair(cost[i],i);
		edges.push_back(edge);
	}
	sort(edges.begin(),edges.end());
	long long  sum = 0;
	for(int i=0;i<m;i++){
		int n1 = src[edges[i].second],n2 = dst[edges[i].second];
		if(!is_same_set(n1,n2)){
			unite(n1,n2);
			sum += edges[i].first;
		}
	}
	cout << sum << endl;
}

#if 0
所要時間は45分程度。クラスカル法を回す部分の実装に少し苦戦した。
#endif 
