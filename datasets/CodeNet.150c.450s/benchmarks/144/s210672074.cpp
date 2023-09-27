#include <iostream>

int main(){
	int n,m,l;
	std::cin>>n>>m>>l;
	int A[n][m];
	int B[m][l];
	long C[n][l];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cin>>A[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<l;j++){
			std::cin>>B[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<l;j++){
			C[i][j]=0;
			for(int k=0;k<m;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
			std::cout<<(j?" ":"")<<C[i][j];
		}
		std::cout<<std::endl;
	}	
	return 0;
}