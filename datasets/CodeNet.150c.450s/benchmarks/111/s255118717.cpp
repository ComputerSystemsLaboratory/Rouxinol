//線形探索やら範囲探索？やらすると、計算量が半端ない。正解の解の数自体が多すぎるので、限定もしづらい。
//N回目に符号をつける数は、どのパターンでも一緒であるので、
//N-1回目までに演算して出てきた値が同じのものは、N回目の演算における結果が一致する。
//結果のバリエーションが少なく、結果が同じものはその前に依存せず、次の結果も同じになる。
//よって、結果によって処理をまとめておこなう、動的計画法とやらが使えそう。
#include<stdio.h>

int main(){
	FILE *fp1,*fp2;
	int num;
	int i,j,d,ans;
	long long data[99][21] = {0};	//data[i][j]には、i回目の演算でjという値がでる場合の数を保存.
													
	//fp1 = fopen("input.txt","r");
	//fp2 = fopen("output.txt","w");
	fscanf(stdin,"%d",&num);
	fscanf(stdin,"%d",&d);		//最初の数字は0以上20以下である。
	data[0][d] = 1;
	for(i = 1;i < num-1;i++){
		fscanf(stdin,"%d",&d);
		for(j = 0;j < 21;j++){
			if(j+d <= 20)
				data[i][j+d] += data[i-1][j];
			if(j-d >= 0)
				data[i][j-d] += data[i-1][j];
		}
	}
	fscanf(stdin,"%d",&ans);
	fprintf(stdout,"%lld\n",data[num-2][ans]);
	//fclose(fp1);
	//fclose(fp2);
	return 0;
}