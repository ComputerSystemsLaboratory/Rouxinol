#include <iostream>

int main(){
	int n;
	int m;
	int A[100][100];
	int b[100];
	int c[100]={};
	std::cin>>n;
	std::cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cin>>A[i][j];
		}
	}
	for(int i=0;i<m;i++){
		std::cin>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[i]+=A[i][j]*b[j];
		}
		std::cout<<c[i]<<std::endl;
	}
	return 0;
}