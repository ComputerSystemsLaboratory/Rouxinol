#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int n;
int A[110][110];
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
	while(cin >> n && n>0){
		init(n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> A[i][j];
			}
		}
		int M = 0;
		int cost[10000],src[10000],dst[10000];
		vector< pair<int,int> > edges;
		for(int r=0;r<n;r++){
			for(int c=r+1;c<n;c++){
				if(A[r][c] > -1){
					cost[M] = A[r][c];
					src[M] = r;
					dst[M] = c;
					//cout << cost[M] << endl;
					pair<int,int> edge = make_pair(cost[M],M);
					edges.push_back(edge);
					M++;
				}
			}
		}
		sort(edges.begin(),edges.end());
		long long  sum = 0;
		for(int i=0;i<M;i++){
			int n1 = src[edges[i].second],n2 = dst[edges[i].second];
			if(!is_same_set(n1,n2)){
				unite(n1,n2);
				sum += edges[i].first;
			}
		}
		cout << sum << endl;
	}
}

#if 0
所要時間は45分程度。クラスカル法を回す部分の実装に少し苦戦した。
#endif 
