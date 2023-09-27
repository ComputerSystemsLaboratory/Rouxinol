#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#define N_MAX 500000
#define INFTY 2000000000//Sの要素の最大値が10^9なのでそれより大きく設定
using namespace std;
//常に心してかかれ
//簡単なことを簡単にできるように練習する
//びっくりするくらいつまらないことで詰まってることも多い

int n;
int S[N_MAX+1];
int n_cmpr=0;

//すでに整列済みの二つの数列からそれらを合わせた数列を整列させる関数
void merge(int A[],int left,int mid,int right){int n1,n2;
	
	n1 = mid -left;
	n2 = right - mid;
	//n2-n1=right-left

	int L[N_MAX];//n1
	int R[N_MAX];//n2

	for(int i=0;i<n1;i++){
		L[i] = A[left + i];
	}

	for(int i=0;i<n2;i++){
		R[i] = A[mid + i];
	}

	L[n1] = INFTY;
	R[n2] = INFTY;

	int i_L=0;
	int i_R=0;
	for(int k=left;k < right;k++){//整列後の数列のk番目の値を決める
		if(L[i_L] <= R[i_R]){
			A[k] = L[i_L];//昇順なので小さい方が採用される
			i_L++;
		}else{
			A[k] = R[i_R];//昇順なので小さい方が採用される
			i_R++;
		}
		n_cmpr++;
	}
}

void mergeSort(int A[],int left,int right){
	int mid;
	if(left+1 < right){
		mid = (left + right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
}

int main(){
	scanf("%d",&n);

	//確認用
	//printf("%d\n",n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&S[i]);

		//確認用
		//printf("%d ",S[i]);
	}

	mergeSort(S,0,n);

	printf("%d",S[0]);//Presentation error対策
	for(int i=1;i<n;i++){
		printf(" %d",S[i]);
	}
	printf("\n");
	printf("%d\n",n_cmpr);

	return 0;
}