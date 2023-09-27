#include <cstdio>

bool solve(int *A, int m, int i, int n){
	//std::printf("solve\n");
	if(m==0){
		return true;
	}
	else if(m<0){
		return false;
	}
	else{
		if(i==n){
			return false;
		}
		else{
			return (solve(A, m, i+1, n) || solve(A, m-A[i], i+1, n));
		}
	}
}


int main(){

	int n,q,i,m;
	int *A;

	std::scanf("%d", &n);
	A = new int[n];
	for(i=0;i<n;i++){
		std::scanf("%d", &A[i]);
	}
	
	std::scanf("%d", &q);
	for(i=0;i<q;i++){
		std::scanf("%d", &m);
		if(solve(A, m, 0, n)){
			std::printf("yes\n");
		}
		else{
			std::printf("no\n");
		}
	}

	delete[] A;
	return 0;
}