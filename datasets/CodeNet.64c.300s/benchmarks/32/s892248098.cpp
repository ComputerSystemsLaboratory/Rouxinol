#include <stdio.h>

int main(void)
{
	int n;
	int min, max;
	double sum;

	scanf("%d", &n);

	int num;
	int pointer=0;
	scanf("%d", &num);
	min=max=sum=num;
	for(int i=0; i<n-1; i++){
		scanf("%d", &num);
		if(min>num) min=num;
		if(max<num) max=num;
		sum+=num;
	}

	printf("%d %d %.0lf\n", min, max, sum);

	return 0;
}