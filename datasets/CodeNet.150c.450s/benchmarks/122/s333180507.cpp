#include <cstdio>
#include <cstdlib>
#include <algorithm>

int parent(int i){
	return i/2;
}

int left(int i){
	return 2*i;
}

int right(int i){
	return 2*i+1;
}

void maxHeapify(int *A, int i, int n){
	int l_idx, r_idx, temp;
	l_idx = left(i+1)-1;
	r_idx = right(i+1)-1;
	temp = i;

	if(r_idx < n){
		if(A[r_idx] > A[i]){
			temp = r_idx;
		}
	}
	if (l_idx < n){
		if (A[l_idx] > A[temp]){
			temp = l_idx;
		}
	}
	if (temp != i){
		std::swap(A[i], A[temp]);
		maxHeapify(A, temp, n);
	}
}

void compareParent(int *A, int i, int n){
	int p;
	if (i!=0){
		p = parent(i+1)-1;
		if (A[i] > A[p]){
			std::swap(A[i], A[p]);
			compareParent(A, p, n);
		}
	}
}

int main(void){
	int n;
	int A[2000000];
	n = 0;
	char op[10];
	while(1){
		scanf("%s", op);
		if(op[2] == 'd'){
			break;
		}
		else if(op[2] == 's'){
			scanf("%d", &A[n]);
			n++;
			compareParent(A, n-1, n);
		}
		else{
			printf("%d\n", A[0]);
			std::swap(A[n-1], A[0]);
			n--;
			maxHeapify(A, 0, n);
		}
	}
	return 0;
}