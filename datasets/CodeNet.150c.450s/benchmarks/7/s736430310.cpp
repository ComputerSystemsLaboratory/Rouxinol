#include<stdio.h>

int main()
{
	int biggest3[3] = {0,0,0};
	for(int i = 0; i < 10; i++)
	{
		int input = 0;
		scanf("%d", &input);

		for(int j = 0; j < 3; j++)
		{
			if(biggest3[j] < input)
			{
				int swap = biggest3[j];
				biggest3[j] = input;
				input = swap;
			}
		}
	}

	printf("%d\n%d\n%d\n", biggest3[0], biggest3[1], biggest3[2]);

	return 0;
}