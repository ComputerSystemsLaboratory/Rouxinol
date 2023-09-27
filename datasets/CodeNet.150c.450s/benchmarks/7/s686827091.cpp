#include <stdio.h>

//１０個のデータを入力し、大きい順で３つのデータを取り出すプログラム

int main(void)
{
	int i, j;		//繰り返し変数
	int h[10];		//データ格納スペース
	int n = 0;			//一時変数
	int rank[3];	//順位付けしたデータを格納

	for (i = 0; i < 10; i++){
		scanf("%d", &h[i]);
	}
	for (j = 0; j < 3; j++){
		for (i = 0; i < 10; i++){
			if (h[n] < h[i]){
				n = i;
			}
		}
		rank[j] = h[n];
		h[n] = -1;
		n = 0;
	}

	printf("%d\n", rank[0]);
	printf("%d\n", rank[1]);
	printf("%d\n", rank[2]);

	return (0);
}