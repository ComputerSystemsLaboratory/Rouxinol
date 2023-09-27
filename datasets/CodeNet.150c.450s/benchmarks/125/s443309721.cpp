// ALDS1_11_B
#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<vector<int> > A, vector<int> &d, vector<int> &f, vector<int> &visit, int &t, int v){
	
	visit[v] = 1;
	d[v] = t++;

	for(int i=0;i<A[v].size();i++)
		if((A[v][i] == 1) && (visit[i] == 0))
			DFS(A, d, f, visit, t, i);

	f[v] = t++;
}

int main(){
	int n, u, k, t=1;
	vector<vector<int> > A;
	vector<int> d, f, visit;

	cin>>n;
	A.resize(n);
	d.resize(n);
	f.resize(n);
	for(int i=0;i<n;i++){
		A[i].resize(n);
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

	for(int i=0;i<n;i++)
		if(!visit[i])
			DFS(A, d, f, visit, t, i);
	
	for(int i=0;i<n;i++)
		cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;

	return 0;
}