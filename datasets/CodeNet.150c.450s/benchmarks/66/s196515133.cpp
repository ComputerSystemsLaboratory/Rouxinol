#include <stdio.h>
#include <string.h>

int main(void){
	int n, m, i, j, count;
	char u[256][11], t[11], c;
	scanf("%d%*c",&n);
	for(i = 0;i < n;i++){
		j = 0;
		while((c = getchar()) != '\n')
			u[i][j++] = c;
		u[i][j] = '\0';
	}

	scanf("%d%*c",&m);
	count = 0;
	for(i = 0;i < m;i++){
		j = 0;
		while((c = getchar()) != '\n')
			t[j++] = c;
		t[j] = '\0';
		for(j = 0;j < n;j++)
			if(!strcmp(t,u[j])) break;
		if(j != n){
			if(count % 2 == 1)
				printf("Closed by ");
			else
				printf("Opened by ");
			count++;
		}
		else
			printf("Unknown ");
		puts(t);
	}
	return 0;
}