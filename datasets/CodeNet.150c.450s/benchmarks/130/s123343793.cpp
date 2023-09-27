#include <cstdio>


int main(){
	unsigned n,m;
	unsigned A[100][100];
	unsigned B[100];
	unsigned C[100];

	for(auto &v : C){
			v = 0;
	}

	scanf("%u%u",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%u",&A[i][j]);
		}
	}

	for(int i=0;i<m;i++){
			scanf("%u",&B[i]);
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			C[i] += A[i][j]*B[j];
		}
	}

	for(int i=0;i<n;i++){
		printf("%u\n",C[i]);
	}
}