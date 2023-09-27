#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, m;
	int i,j;
	cin>>n>>m;
	vector<vector<int> > 	A;
	A.resize(n);
	for(i=0;i<n;i++){
		A[i].resize(m);
	}
	vector<int> 		b(m), c(n);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	for(i=0;i<m;i++){
		cin>>b[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i] += A[i][j] * b[j];
		}
	}
	for(i=0;i<n;i++){
		cout << c[i] <<endl;
	}
	return 0;
}