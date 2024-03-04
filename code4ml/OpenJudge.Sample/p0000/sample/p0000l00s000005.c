#include<stdio.h>

int main(){
	int i, j, hill[10], temp;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &hill[i]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = i+1; j < 10; j++)
		{
			if(hill[i] < hill[j])
			{
				temp = hill[i];
				hill[i] = hill[j];
				hill[j] = temp;
			}
		}
	}
	
	printf("%d\n%d\n%d\n", hill[0], hill[1], hill[2]);
	
	return 0;
}