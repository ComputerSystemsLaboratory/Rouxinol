#include<stdio.h>
int main(void) {
	int cost, coin, cv[] = { 500,100,50,10,5,1 };
	while (scanf("%d", &cost))
	{
		if (cost == 0)break;
		coin = 0;
		cost = 1000 - cost;
		for (int i = 0; i < 6; i++)
		{
			coin += cost / cv[i];
			cost = cost % cv[i];
		}
		printf("%d\n", coin);
	}
	return 0;
}