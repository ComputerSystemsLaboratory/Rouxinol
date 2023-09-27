#include <iostream>
#include <stdio.h>
#define MAX_NODES 2000000
#define INFTY 2000000010

using namespace std;
//think easy make easy
//think stupid

int n=0;//num of nodes

//iを根とするMaxヒープをつくる関数.初期状態はiを根とする二分木
void maxHeapify(int A[],int i){//i is index of root
	int l,r;
	int largest;
	int tmp;

	l = 2 * i;
	r = l + 1;

	if(l <= n && A[l] > A[i]) largest = l;
	else largest = i;

	if(r <= n && A[r] > A[largest]) largest = r;

	if(largest != i){
		tmp = A[i];
		A[i] = A[largest];
		A[largest] = tmp;
		maxHeapify(A,largest);
	}

	
}

void buildMaxHeap(int A[]){//AをMaxヒープにする関数
	for(int i=n/2;i>0;i--){//1~n/2が左右の子少なくとも一方が存在する範囲
		maxHeapify(A,i);
	}
}

void heapIncreasingKey(int A[]){
	int tmp;
	int tmp_n;
	for(int i=n;i>1;i=i/2){
		if(A[i/2] < A[i]){
			tmp = A[i];
			A[i] = A[i/2];
			A[i/2] = tmp;
		}else break;
	}
}



void insert(int A[],int num){
	n++;
	A[n] = num;
	heapIncreasingKey(A);
}

void extract(int A[]){
	cout <<A[1] <<endl;
	A[1] = A[n];
	n--;
	maxHeapify(A,1);

}

void swap(){

}
int main(){
	//1オリジン(添え字が1からはじまる)のためナル文字分の+1に加えさらに+1する
	int H[MAX_NODES+1+1];
	int num;
	char type[100];

	while(true){
		scanf("%s",&type);

		if(type[0] == 'i'){
			scanf("%d",&num);
			insert(H,num);
		}
		else if(type[1] == 'x'){
			extract(H);
		}else break;
	}

	return 0;
}