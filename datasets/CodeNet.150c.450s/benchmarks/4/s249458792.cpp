#include <stdio.h>

int main(void)
{
	int m, f, r, p;
	
	while(1) {
		scanf("%d %d %d", &m, &f, &r);
		if(m == -1 && f == -1 && r == -1) break;
		p = m + f;
		if(m == -1 || f == -1)
		    printf("F\n");
		else if(p >= 80)
		    printf("A\n");
		else if(p >= 65 && p < 80)
		    printf("B\n");
		else if(p >= 50 && p < 65 || r >= 50)
		    printf("C\n");
		else if(p >= 30 && p < 50)
		    printf("D\n");
		else if(m == -1 || f == -1 || p < 30)
		    printf("F\n");
	}
	return 0;
}