#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int A[101][101],b[101],V[101];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			V[i]+=A[i][j]*b[j];
		}
	}
	for(int i=0;i<n;i++){
		cout <<V[i]<<endl;
	}
	return 0;
}