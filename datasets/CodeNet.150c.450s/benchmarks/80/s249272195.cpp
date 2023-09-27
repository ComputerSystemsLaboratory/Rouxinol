#include <stdio.h>

#define A_N (2)

int a_max(int a[])
{
	int max;
	int i;
	
	max = a[0];
	for (i = 1; i < A_N; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	
	return (max);
}

int main(void)
{
	int x;
	int s[2];
	int i, j;
	
	for (i = 0; i < A_N; i++){
		s[i] = 0;
		for (j = 0; j < 4; j++){
			scanf("%d", &x);
			s[i] += x;
		}
	}
	
	printf("%d\n", a_max(s));
	
	return (0);
}