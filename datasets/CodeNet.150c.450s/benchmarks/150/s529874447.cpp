/*******以下はMAX_NUM_INPUTが大きい場合用のコード．ALDS1_6_A-Counting Sort.cppが小さい場合用のコード****/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#define MAX_NUM_INPUT 20000
#define MAX 10000
#define INFTY 20000//>MAX
using namespace std;
//常に心してかかれ
//簡単なことを簡単にできるように練習する
//びっくりするくらいつまらないことで詰まってることも多い
//それでも不具合の可能性は常にある


int n;

void countingSort(/*int A[],int B[],*/int k){//後々使えるように最大値は定数MAXではなく変数で与えといた
	int C[INFTY];//Cの添え字は0?kまで使える必要がある
	int tmp;//++

	scanf("%d",&n);

	for(int i=0;i<k+1;i++){//iの範囲に注意
		C[i] = 0;
	}

	//C[i]にはAにおけるiの出現回数を記録(上ですべての要素を0で初期化しているのでない要素があってもいい)
	for(int i=0;i<n;i++){//iの範囲に注意
		scanf("%d",&tmp);
		C[tmp]++;
	}

	//C[i]にAにおけるi以下の数の出現回数を記録
	for(int i=0;i<k+1;i++){//iの範囲に注意
		C[i+1] = C[i] + C[i+1];
	}

	//CをもとにB(出力)を決定
	/*
	for(int i=0;i<C[0];i++){
		B[i] = 0;
	}
	*/
	bool first_output = true;//++ 表示が一回以上行われたかどうか判定する変数
	for(int i=0;i<C[0];i++){
		if(first_output){
			printf("0");
			first_output = false;
		}else{
			printf(" 0");
		}
	}
	for(int i=1;i<k+1;i++){
		if(C[i-1] < C[i]){
			for(int j = C[i-1];j < C[i];j++){
				//B[j] = i;
				if(first_output){
					printf("%d",i);
					first_output = false;
				}else{
					printf(" %d",i);
				}
			}
		}
	}

	printf("\n");
}

int main(){
	int k = MAX;
	//int A[MAX_NUM_INPUT+1];//before sort
	//int B[MAX_NUM_INPUT+1];//after sort

	//scanf("%d",&n);

	//確認用
	//printf("%d\n",n);
	
	/*
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);

		//確認用
		//printf("%d ",S[i]);
	}
	*/

	countingSort(/*A,B,*/k);
	
	/*
	//結果出力
	printf("%d",B[0]);
	for(int i=1;i<n;i++){
		printf(" %d",B[i]);
	}
	printf("\n");
	//
	*/

	return 0;
}