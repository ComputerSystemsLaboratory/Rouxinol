#include <stdio.h>

int main();
int sub_sum(int start_int, int  num_int);

int main(){
	int input[100] = {0};
	int num_int;
	int start_int;
	int max_int;
	int result[3] = {0};
	int result_temp;
	int sum_result;
	int i,i_dataset;

	
	//データ入力
	i_dataset = 0;
	while(1){
		scanf("%d",&input[i_dataset]);
		if (input[i_dataset]==0) break; //0が入れば読み込み停止
		else i_dataset++; //データ数を記録
	}
	
	//計算開始
	for(i=0;i<i_dataset;i++){ //各データ入力に対する処理を行う
		
		result_temp = 0;
		max_int = input[i];
		
		for(num_int=2; num_int<max_int; num_int++){ //連続範囲の定義
			
			for(start_int=1; start_int < max_int;start_int++){ //開始数最大値の定義
				
				sum_result = num_int * ( start_int + start_int + num_int - 1 ) / 2; //和の計算
				
				if(sum_result > max_int)break; //入力を上回った時点で計算終了
				else if(sum_result == max_int) result_temp++; //入力と一致したらカウント
				
			}
		}
		
		result[i] = result_temp; //カウント結果を格納
	}
	
	for(i=0;i<i_dataset;i++){
		printf("%d\n",result[i]); //結果出力
	}
	return 0;
}

