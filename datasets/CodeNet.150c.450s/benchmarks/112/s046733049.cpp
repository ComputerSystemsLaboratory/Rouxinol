#include <stdio.h>

char ans[100000007];

int main(void)
{
	int m, n;
	int i, j, k;
	int f;
	char lb[12000];
	char la[12000];
	char c;
	
	while (scanf("%d", &n), n != 0){
		
		for (i = 0; i < n; i++){
			scanf(" %c %c", &lb[i], &la[i]);
		}
		scanf("%d", &m);
		k = 0;
		for (i = 0; i < m; i++){
			scanf(" %c", &c);
			f = 0;
			for (j = 0; j < n; j++){
				if (lb[j] == c){
					ans[k] = la[j];
					k++;
					f = 1;
				}
			}
			if (f == 0){
				ans[k] = c;
				k++;
			}
		}
		ans[k] = '\0';
		
		printf("%s\n", ans);
	}
	return (0);
}