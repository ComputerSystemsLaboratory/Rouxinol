#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int i,H;
	vector<int> A;
	scanf("%d",&H);
	A.resize(H+1);
	for(i=1; i<=H; ++i) {
		scanf("%d",&A[i]);
	}
	for(i=1; i<=H; ++i) {
		printf("node %d: key = %d, ",i,A[i]);
		if(i!=1) {
			printf("parent key = %d, ",A[i/2]);
		}
		if(2*i<=H) {
			printf("left key = %d, ",A[2*i]);
		}
		if(2*i+1<=H) {
			printf("right key = %d, ",A[2*i+1]);
		}
		printf("\n");
	}
	return 0;
}