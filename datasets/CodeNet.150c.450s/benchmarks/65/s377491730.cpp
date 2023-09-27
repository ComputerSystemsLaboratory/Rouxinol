//#define _USE_MATH_DEFINES // for C++
//#include <cmath>
//#include <vector>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int BubbleSort(char A[][3], int n){

	char buf[3];


	for (int i = 0; i < n; i++){
		for (int j = n - 1; j > i; j--){
			if (atoi(&A[j][1]) < atoi(&A[j - 1][1])){
				strcpy(buf, &A[j - 1][0]);
				strcpy(&A[j - 1][0], &A[j][0]);
				strcpy(&A[j][0], buf);
			}
		}
	}

	//??????
	printf("%s", &A[0][0]);
	for (int i = 1; i < n; i++) printf(" %s", &A[i][0]);
	printf("\n");

	return 0;
}

int SelectionSort(char A[][3],int n){
	int minj;
	char buf[3];
	
	for (int i = 0; i < n; i++){
		minj = i;
		for (int j = i; j < n; j++){
			if (atoi(&A[j][1]) < atoi(&A[minj][1])){
				minj = j;
			}
		}
		if (minj != i){
			strcpy(buf, &A[minj][0]);
			strcpy(&A[minj][0], &A[i][0]);
			strcpy(&A[i][0], buf);
		}
	}
	
	//??????
	printf("%s", &A[0][0]);
	for (int i = 1; i < n; i++) printf(" %s", &A[i][0]);
	printf("\n");

	return 0;
}

int CheckStable(char A[][3], char B[][3], int n){

	int index1, index2;

	for (int i = 0; i < n - 1; i++){
		index1 = 0;
		index2 = 0;
		if (atoi(&B[i][1]) == atoi(&B[i + 1][1])){
			for (int j = 0; j < n; j++){
				if (strcmp(&B[i][0], &A[j][0]) == 0) index1 = j;
				if (strcmp(&B[i+1][0], &A[j][0]) == 0) index2 = j;
			}
			if (index1 > index2){
				printf("Not stable\n");
				return 1;
			}
		}
	}

	printf("Stable\n");

	return 0;
}

int main(){
	
	int n;
	char A[36][3];
	char C[36][3];
	char D[36][3];

	//??\???
	scanf("%d", &n);
	for (int i = 0; i < n; i++)	scanf("%s", &A[i][0]);
	for (int i = 0; i < n; i++)	strcpy(&C[i][0], &A[i][0]);
	for (int i = 0; i < n; i++)	strcpy(&D[i][0], &A[i][0]);

	BubbleSort(C, n);
	CheckStable(A, C, n);

	SelectionSort(D, n);
	CheckStable(A, D, n);

	return 0;
}