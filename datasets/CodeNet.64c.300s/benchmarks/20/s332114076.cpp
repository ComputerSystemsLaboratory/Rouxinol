#include <stdio.h>

int main()
{
	int num,sum;
	while(scanf("%d", &num) != EOF){
		sum = 0;
		for(int i = num; i <= 600 - num; i += num){
			sum += i * i * num;
		}
		printf("%d\n",sum);
	}
	return 0;
}