#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n;
	int i,max=-1;
	int C[100001] = {0};
	vector<int> A,B;
	scanf("%d",&n);
	A.resize(n);
	B.resize(n);
	C[0]=0;
	for(i=0; i<n; ++i) {
		scanf("%d",&A[i]);
		max=(max<A[i]?A[i]:max);
	}
	for(i=0; i<=max; ++i) {
		C[i]=0;
	}
	for(i=0; i<n; ++i) {
		++C[A[i]];
	}
	for(i=1; i<=max; ++i) {
		C[i]=C[i]+C[i-1];
	}
	for(i=n-1; i>=0; --i) {
		B[C[A[i]]-1] = A[i];
		--C[A[i]];
	}
	for(i=0; i<n-1; ++i) {
		printf("%d ",B[i]);
	}
	printf("%d\n",B[n-1]);
	return 0;
}