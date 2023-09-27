#include<stdio.h>

int judg(int, int);

int main() {
	int dt[BUFSIZ];
	int i, num;

	int n, x;
	for (i = 0; i < BUFSIZ - 1; i++) {

		fflush(stdin);
		scanf("%d %d", &n, &x);

		if (!n)break;

		dt[i] = judg(n, x);

	}
	num = i;

	for (i = 0; i < num; i++) {
		printf("%d\n", dt[i]);
	}


	return 0;
}
int judg(int n, int x) {
	int i, j;
	int cnt = 0;


	for (i = 1; i < x / 3 && i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
// i,j,x,n is const
//  -> k (i+j+k==x) is const (k' (k'==x-i-j))
// ((i<)j<k<=n) ->( +=(i+j) )-> (i+j*2 < i+j+k(==x) <= i+j+n )

			if ((i + j * 2 < x) && (x <= i + j + n))cnt++;

		}//j/
	}//i/


	return cnt;
}