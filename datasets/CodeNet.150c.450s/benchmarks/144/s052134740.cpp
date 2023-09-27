#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n, m, l;
	cin>>n>>m>>l;
	vector<vector<long> > A(n, vector<long>(m));
	vector<vector<long> > B(m, vector<long>(l));
	vector<vector<long> > C(n, vector<long>(l));
	int i,j, k;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			cin>>B[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=0;k<m;k++){
				C[i][j] += A[i][k]*B[k][j];
			}
			cout<<C[i][j];
			if(j!=l-1)cout<< ' ';
		}
		cout << endl;
	}
	
	return 0;
}