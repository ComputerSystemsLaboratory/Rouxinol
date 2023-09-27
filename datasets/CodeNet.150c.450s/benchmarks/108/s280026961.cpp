//ALDS1_11_C
#include <iostream>
#include <vector>
#define  N     1000
using namespace std;

void BFS(vector<vector<int> > A, vector<int> &d, vector<int> &visit, int v){
	if(v == 0){
		d[0] = 0;
		visit[0] = 1;
	}

	for(int i=0;i<A[v].size();i++){
		if((A[v][i] == 1) && (d[i] > d[v]+1)){
			d[i] = d[v]+1;
			visit[i] = 1;
			BFS(A, d, visit, i);
		}
	}	
}

int main(){
	int n, u, k;
	vector<vector<int> > A;
	vector<int> d, visit;

	cin>>n;
	A.resize(n);
	for(int i=0;i<n;i++){
		A[i].resize(n);
		d.push_back(N);
		visit.push_back(0);
	}

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			A[i][j] = 0;

	for(int i=0;i<n;i++){
		cin>>u>>k;
		int v;
		
		for(int j=0;j<k;j++){
			cin>>v;
			A[u-1][v-1] = 1;
		}
	}

	BFS(A, d, visit, 0);
	for(int i=0;i<n;i++)
		if(visit[i] == 0)
			d[i] = -1;

	for(int i=0;i<n;i++)
		cout<<i+1<<" "<<d[i]<<endl;

	return 0;
}