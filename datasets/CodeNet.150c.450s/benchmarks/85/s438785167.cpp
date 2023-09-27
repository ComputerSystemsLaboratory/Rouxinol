#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

struct Matrix{int r,c;};

int main(){
	int n;
	int i,k,l,f;
	cin >> n;
	vector<Matrix> M(n);
	
	for (i=0;i<n;i++){
		cin >> M[i].r;
		cin >> M[i].c;
	}
	
	int DPtable[n][n];
	for (i=0;i<n;i++){
		DPtable[i][i]=0;
	}
	
	for (k=1;k<n;k++){
		for (i=0;i<n-k;i++){
			int m=INT_MAX;
			for (l=0;l<=k-1;l++){
				f=M[i].r*M[i+l].c*M[i+k].c;
				if (DPtable[i][i+l]+DPtable[i+l+1][i+k]+f<m){
					m=DPtable[i][i+l]+DPtable[i+l+1][i+k]+f;
				}
			}
			DPtable[i][i+k]=m;
			
		}
	}
	
	cout << DPtable[0][n-1] <<endl;
	
	return 0;
}