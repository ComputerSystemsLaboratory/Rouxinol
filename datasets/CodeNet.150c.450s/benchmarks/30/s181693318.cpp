#include <stdio.h>

using namespace std;



int main(){
	
	int n;
	int A[100];
	int minj;
	int buf;
	int cnt = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)	scanf("%d", &A[i]);

	for (int i = 0; i < n; i++){
		minj = i;
		for (int j = i; j < n; j++){
			if (A[j] < A[minj]){
				minj = j;
			}
		}
		if (minj != i){
			buf = A[minj];
			A[minj] = A[i];
			A[i] = buf;
			cnt++;
		}
	}

	printf("%d", A[0]);
	for (int i = 1; i < n; i++) printf(" %d", A[i]);
	printf("\n%d\n", cnt);

	return 0;
}