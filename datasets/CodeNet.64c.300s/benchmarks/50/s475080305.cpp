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

	void bubbleSort(int A[],int N);
	bubbleSort(A,num);

	return 0;
}

void bubbleSort(int A[],int N){
	bool flag = true;
	int tmp;
	int cnt = 0;//交換回数のカウンタ

	/*まずソートを行う前の状態を出力
	for(int k=0;k<N-1;k++){
			cout <<A[k] <<" ";
		}
		cout <<A[N-1];
		cout <<endl;
		*/

	while(flag){
		flag = false;

		//交換が一回も行われなかった場合flag = trueでforループを抜ける
		for(int j=N-1;j>0;j--){
			if(A[j] < A[j-1]){
				tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				cnt++;
				flag = true;
			}
		}
		/*この交換後の状態を出力
		for(int k=0;k<N-1;k++){
			cout <<A[k] <<" ";
		}
		cout <<A[N-1];
		cout <<endl;
		*/
	}
	/*ソート終了後の状態を出力*/
	for(int k=0;k<N-1;k++){
			cout <<A[k] <<" ";
		}
		cout <<A[N-1];
		cout <<endl;
	cout <<cnt <<endl;
}