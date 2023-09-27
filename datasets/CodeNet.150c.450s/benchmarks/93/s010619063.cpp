#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#define MAX_INPUT 100000
#define MAX 1000000000
#define INFTY 2000000000//>MAX

using namespace std;
//常に心してかかれ
//簡単なことを簡単にできるように練習する
//びっくりするくらいつまらないことで詰まってることも多い
//それでも不具合の可能性は常にある


class card{
public:
	char mark;
	int number;

	/*
	card(char MARK,int NUMBER){
		mark = MARK;
		number = NUMBER;
	}
	*/

	/*
	 *デフォルトコンストラクタが自動で生成されるのは、
	 *プログラマがコンストラクタを一つも記述しなかった時のみ
	 *http://brain.cc.kogakuin.ac.jp/~kanamaru/lecture/C++2/09/09-01.html
	 */
	card(){//デフォルトコンストラクタ
	}
};

card deck[MAX_INPUT+1];
card deck_to_check[MAX_INPUT+1];//バブルソートを用いたクイックソートの安定性検証用配列
int n;//num of input


int partition(card A[],int p,int r){//rは配列の最後を指す添え字
	int x = A[r].number;
	int i = p;
	card tmp;
	
	for(int j=p;j<r;j++){
		if(A[j].number <= x){
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
			i++;
		}
	}
	tmp = A[i];
	A[i] = A[r];
	A[r] = tmp;

	return i;
}

//クイックソートの安定性のチェックのため
void bubbleSort(card A[],int N){
	bool flag = true;
	card tmp;

	while(flag){
		flag = false;

		//交換が一回も行われなかった場合flag = trueでforループを抜ける
		for(int j=N-1;j>0;j--){
			if(A[j].number < A[j-1].number){
				tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				flag = true;
			}
		}
	}
}

//すでに整列済みの二つの数列からそれらを合わせた数列を整列させる関数
void merge(card A[],int left,int mid,int right){int n1,n2;
	
	n1 = mid -left;
	n2 = right - mid;
	//n2-n1=right-left

	card L[MAX_INPUT];//n1
	card R[MAX_INPUT];//n2

	for(int i=0;i<n1;i++){
		L[i] = A[left + i];
	}

	for(int i=0;i<n2;i++){
		R[i] = A[mid + i];
	}

	L[n1].number = INFTY;
	R[n2].number = INFTY;

	int i_L=0;
	int i_R=0;
	for(int k=left;k < right;k++){//整列後の数列のk番目の値を決める
		if(L[i_L].number <= R[i_R].number){
			A[k] = L[i_L];//昇順なので小さい方が採用される
			i_L++;
		}else{
			A[k] = R[i_R];//昇順なので小さい方が採用される
			i_R++;
		}
	}
}

void mergeSort(card A[],int left,int right){
	int mid;
	if(left+1 < right){
		mid = (left + right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
}

void quickSort(card A[],int p,int r){
	int q;
	if(p < r){
		q = partition(A,p,r);
		quickSort(A,p,q-1);
		quickSort(A,q+1,r);
	}
}

int main(){
	char tmp_char;
	int tmp_num;
	scanf("%d",&n);
	//printf("%d",n);

	for(int i=0;i<n;i++){
		cin >>tmp_char;//なぜかscanf("%c",&tmp_char)では失敗する
		//printf("%c",tmp_char);
		scanf("%d",&tmp_num);
		//printf("%d",tmp_num);

		deck[i].mark = tmp_char;
		deck_to_check[i].mark = tmp_char;
		deck[i].number = tmp_num;
		deck_to_check[i].number = tmp_num;
	}

	quickSort(deck,0,n-1);
	//bubbleSort(deck_to_check,n);//バブルソートだと途中からTLEになっちゃう
	mergeSort(deck_to_check,0,n);

	for(int i=0;i<n;i++){
		if(deck[i].mark != deck_to_check[i].mark){
			printf("Not stable\n");
			break;
		}
		if(i == n-1){
			printf("Stable\n");
			break;
		}
	}
	for(int i=0;i<n;i++){
		cout <<deck[i].mark <<" " <<deck[i].number <<endl;
	}

	return 0;
}