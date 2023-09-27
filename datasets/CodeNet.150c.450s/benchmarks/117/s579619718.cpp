#include <cstdio>
#include <vector>
using namespace std;

int c=0;

void merge(vector<int>& A, int left, int mid, int right) {
	int i,j,k;
	int n1=mid-left;
	int n2=right-mid;
	vector<int> L, R;
	L.resize(n1+1);
	R.resize(n2+1);
	for(i=0; i<n1; ++i) {
		L[i]=A[left+i];
	}
	for(i=0; i<n2; ++i) {
		R[i]=A[mid+i];
	}
	L[n1]=1000000001;
	R[n2]=1000000001;
	i=j=0;
	for(k=left; k<right; ++k) {
		++c;
		if(L[i]<=R[j]) {
			A[k]=L[i];
			++i;
		} else {
			A[k]=R[j];
			++j;
		}
	}
	return;
}

void mergeSort(vector<int>&A, int left, int right) {
	if(left+1<right) {
		int mid=left+(right-left)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
	return;
}

int main() {
	vector<int> A;
	int n;
	int i;
	scanf("%d",&n);
	A.resize(n);
	for(i=0; i<n; ++i) {
		scanf("%d", &A[i]);
	}
	mergeSort(A,0,n);
	for(i=0; i<n-1; ++i) {
		printf("%d ",A[i]);
	}
	printf("%d\n%d\n",A[n-1],c);
	return 0;
}