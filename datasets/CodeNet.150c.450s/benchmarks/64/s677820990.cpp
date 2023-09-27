#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool sum_binsearch(int target, int index, vector<int>& A) {
	if(target==A[index]) {
		return true;
	} else if( target < A[index] || index>=(int)A.size()) {
		return false;
	} else {
		return (sum_binsearch(target,index+1,A) || sum_binsearch(target-A[index],index+1,A));
	}
}

int main() {
	int i;
	int m,n,q;
	vector<int> A;
	scanf("%d",&n);
	A.resize(n);
	for(i=0;i<n;++i) {
		scanf("%d",&A[i]);
	}
	sort(A.begin(),A.end()); // ?????????
	scanf("%d",&q);
	for(i=0; i<q; ++i) {
		scanf("%d",&m);
		if(sum_binsearch(m,0,A)) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	return 0;
}