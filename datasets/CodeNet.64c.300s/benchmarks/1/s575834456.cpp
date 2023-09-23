#include <iostream>
#include <cstdio>

using namespace std;

int Partition(int *A, int p, int r){
	int x = A[r];
	int i = p-1;
	for(int j=p; j<r; j++){
		if(A[j]<=x){
			i = i+1;
			int k = A[j];
            A[j] = A[i]; A[i] = k;
		}
	}
	int k = A[r];
	A[r] = A[i+1]; A[i+1] = k;
	return i+1;
}


int main(){
	int n;
	cin >> n;
	
	int *A;
	A = new int[n];
	for(int i=0;i<n;i++){
		scanf(" %d",&A[i]);
	}
	int p = Partition(A,0,n-1);
	for(int i=0;i<n;i++){
		if(i == p){
			printf("[%d]",A[p]);
		} else {
			printf("%d",A[i]);
		}
		if(i!=n-1) printf(" ");
		else printf("\n");
	}
	return 0;
}