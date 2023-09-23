#include <iostream>
#include <cstdio>
int main(){
	int n,m,i,j;
	std::cin>>n>>m;
	int A[n][m],b[m];
	int ans[n];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			std::cin>>A[i][j];
		}
	}	
	for(j=0;j<m;j++){
		std::cin>>b[j];
	}	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(j==0)ans[i]=0;
			ans[i]+=A[i][j]*b[j];
		}
	}
	for(i=0;i<n;i++){
			std::cout<<ans[i]<<std::endl;
	}
	return 0;
}