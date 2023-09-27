#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int A[1001];//ソートする数列を格納する配列
	int num;//数列の長さ

	//配列を0で初期化
	for(int i=0;i<1001;i++){
		A[i] = 0;
	}

	cin >>num;
	
	for(int i=0;i<num;i++){
		scanf("%d",&A[i]);
	}

	void selectionSort(int A[],int N);//プロトタイプ宣言
	selectionSort(A,num);

	return 0;
}

void selectionSort(int A[],int N){
	int minj;//minjはA[i]?A[N-1]の最小値の添え字
	int tmp;
	int cnt=0;//交換回数
	for(int i=0;i<N;i++){
		minj = i;
		for(int j=i;j<N;j++){
			if(A[j] < A[minj]){
				minj = j;
			}
		}
		if(minj != i)
			cnt++;
		tmp = A[i];
		A[i] = A[minj];
		A[minj] = tmp;
	}
	//ソート完了後の状態を出力
		for(int k=0;k<N-1;k++){
			cout <<A[k] <<" ";
		}
		cout <<A[N-1];
		cout <<endl;
		cout <<cnt <<endl;
}