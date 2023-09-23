#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *itoa( int val, char *a, int radix )
{
	char *p = a;
	unsigned int v = val;/* 作業用(変換対象の値) */
	int n = 1;/* 変換文字列の桁数記憶用 */
	while(v >= radix){/* 桁数を求める */
		v /= radix;
		n++;
	}
	p = a + n; /* 最下位の位置から設定する */
	v = val;
	*p = '\0';/* 文字列終端の設定 */
	do {
		--p;
		*p = v % radix + '0';/* 1桁の数値を文字に変換 */
		if(*p > '9') {/* 変換した文字が10進で表現できない場合 */
			*p = v % radix - 10 + 'A'; /* アルファベットを使う */
		}
		v /= radix;
	} while ( p != a);
	return a;
}

int main(void) {
	int sum,x,y;
	char ssum[8];
	
	while(scanf("%d%d", &x, &y) != EOF){
		sum = x+y;
		itoa(sum,ssum,10);
		printf("%d\n",strlen(ssum));
	}
	
	return 0;
}