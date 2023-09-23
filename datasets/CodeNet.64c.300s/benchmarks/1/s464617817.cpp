#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#define N_MAX 100000
using namespace std;
//常に心してかかれ
//簡単なことを簡単にできるように練習する
//びっくりするくらいつまらないことで詰まってることも多い

int n;

int partition(int A[],int p,int r){//rは配列の最後を指す添え字
	int x = A[r];
	int i = p;
	int tmp;
	
	for(int j=p;j<r;j++){
		if(A[j] <= x){
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
			i++;
		}
	}
	tmp = A[i];
	A[i] = A[r];
	A[r] = tmp;

	return i;//iはx以下の数の数ともいえる
}

int main(){
	int A[N_MAX+1];
	int p;

	scanf("%d",&n);

	//確認用
	//printf("%d\n",n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);

		//確認用
		//printf("%d ",A[i]);
	}

	p = partition(A,0,n-1);
	
	if(n == 1){
		printf("[%d]\n",A[0]);
		return 0;
	}
	if(p == 0){
		printf("[%d]",A[0]);
	}else
		printf("%d",A[0]);
		for(int i=1;i<n;i++){
			if(i == p){
				printf(" [%d]",A[i]);
			}else
				printf(" %d",A[i]);
	}
	printf("\n");
}