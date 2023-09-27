#include <cstdio>
#include <vector>
using namespace std;

int partition(vector<int>& A, int p, int r) {
	int i,j,x=A[r];
	i=p-1;
	for(j=p; j<r; ++j) {
		if(A[j]<=x) {
			++i;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}

int main() {
	int n;
	int i;
	int q;
	vector<int> A;
	scanf("%d",&n);
	A.resize(n);
	for(i=0; i<n; ++i) {
		scanf("%d",&A[i]);
	}
	q=partition(A,0,n-1);
	for(i=0; i<q; ++i) {
		printf("%d ",A[i]);
	}
	if(q==n-1) {
		printf("[%d]\n",A[q]);
	} else {
		printf("[%d] ",A[q]);
		for(i=q+1; i<n-1; ++i){
			printf("%d ",A[i]);
		}
		printf("%d\n",A[n-1]);
	}
	return 0;
}