#include <iostream>
#include <stdio.h>
static int MAX = 100;


void selectionSort(int *A,int N){
	int minj;
	int buf;
	int koukan=0;
	int count=0;
	for(int i=0;i < N-1;i++){
		minj = i;
		koukan=0;
		for(int j=i+1;j < N;j++){
			if(A[j] < A[minj]){
				minj = j;
				koukan = 1;
			}
		}
		count += koukan;
		buf = A[i];
		A[i] = A[minj];
		A[minj] = buf;
	}
	printf("%d",A[0]);
	for(int i = 1;i < N;i++){
		printf(" %d",A[i]);
	}
	printf("\n");
	std::cout << count << std::endl;

}
int main(){
	int A[MAX];
	int n;
	std::cin >> n;
	for(int i = 0;i < n;i++) std::cin >> A[i];

	selectionSort(A,n);


	return 0;
}