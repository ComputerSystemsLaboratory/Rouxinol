// ALDS1_11_A
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, u, k;
	vector<vector<int> > A;

	cin>>n;
	A.resize(n);
	for(int i=0;i<n;i++){
		A[i].resize(n);
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

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j!=0)
				cout<<" ";
			cout<<A[i][j];
		}
		cout<<endl;
	}

	return 0;
}