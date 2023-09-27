#include<stdio.h>

int i, j, N, k, a[3];

void swap(int, int);

int main(){
	N = 3;

	scanf("%d %d %d", &a[0], &a[1], &a[2]);

	

	for(i = 0; i < N-1; i++){
		for(j = i; j < N; j++){
			if(a[i] > a[j]){
				swap(i, j);
			}
		}
	}
	printf("%d %d %d\n", a[0], a[1], a[2]);
}
	void swap(int i, int j){
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}