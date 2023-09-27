#include <stdio.h>
#define NUMBER 100

void print_array(int array[],int num){
	int i;
	
	for(i = 0; i < num - 1; i++)
		printf("%d ", array[i]);
	
	//スペースを出力したくないので最後の要素だけfor文外で出力
	printf("%d\n", array[i]);
}

void insertionSort(int array[],int num){
	int i, j, v;
	for(i = 1; i <= num - 1 ; i++){
		v = array[i];
		j = i - 1;
		while(j >= 0 && array[j] > v){
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = v;
		//配列の出力
		print_array(array, num);
	}
}

int main(void){
	int array[NUMBER];
	int num, i;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		//配列を入力
		scanf("%d", &array[i]);
	}
	print_array(array, num);
	
	//挿入ソート
	insertionSort(array, num);

	
	return 0;
}
