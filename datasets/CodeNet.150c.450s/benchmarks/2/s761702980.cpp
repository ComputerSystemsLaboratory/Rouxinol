#include <cstdio>
#define MAX 100000

int last_num = 0;

void partition(int A[], int start, int end){
	//基準xを設定する
	int x = A[end - 1];

	int i = start;

	for (int j = start; j < end - 1; j++) {
		if(x >= A[j]) {
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++;
		} 
	}

	int temp = A[end - 1];
	A[end - 1] = A[i];
	A[i] = temp;
	last_num = i;
}


int main(){
	int n;
	int A[MAX];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	int r = A[n-1];
	partition(A, 0, n);
	for(int i = 0; i < n - 1; i++) {
		i == last_num ? printf("[%d] ",A[i]) : printf("%d ", A[i]);
	}
	printf("%d\n", A[n-1]);
}
