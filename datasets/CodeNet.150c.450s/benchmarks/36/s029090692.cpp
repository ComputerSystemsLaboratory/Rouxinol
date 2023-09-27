#include <stdio.h>

int f(int);

int main()
{
	int d,total;

	while(scanf("%d",&d) != EOF){
		total = 0;
		for(int i = 1; d*i < 600; i++){
			total += f(d*i) * d;
		}
		printf("%d\n",total);
	}

	return 0;
}

int f(int d){
	return (d * d);
}