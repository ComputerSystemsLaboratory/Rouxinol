#include <iostream>
#define  N    101
using namespace std;

int main(){
	int A[N][N], b[N], c[N] = {0}, n, m;

	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>A[i][j];
		}
	}

	for(int j=0;j<m;j++){
		cin>>b[j];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[i] += A[i][j] * b[j];
		}
		cout<<c[i]<<endl;
	}
	
	return 0;
}