#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX_N 100
#define MIL_DAYS 196470

int main()
{
	int i, N;
	int y, m, d;
	int days = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d %d %d", &y, &m, &d);
		if(y % 3 == 0){
			days += (d-1);
			days += 20*(m-1);
		}else{
			days += (d-1);
			days += (19+20)*((m-1)/2)+((m-1)%2)*20;
		}
		days += ((y-1)/3)*10*20+((y-1)-(y-1)/3)*5*(20+19);
		printf("%d\n", MIL_DAYS-days);
		days = 0;
	}
	return 0;
}