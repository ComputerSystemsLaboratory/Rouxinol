#include <stdio.h>

#define rep(i, n) for(int i=0; i<(int)(n); i++)

int main()
{
	int a[4], b[4];
	while(scanf("%d%d%d%d%d%d%d%d", a, a+1, a+2, a+3, b, b+1, b+2, b+3)!=EOF) {
		int hit=0, blow=0;
		rep(i, 4) rep(j, 4) if(a[i]==b[j]) {
			if(i==j) hit++;
			else blow++;
		}
		printf("%d %d\n", hit, blow);
	}
	return 0;
}