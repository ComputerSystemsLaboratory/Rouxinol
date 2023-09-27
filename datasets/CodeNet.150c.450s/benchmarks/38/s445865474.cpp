#include<stdio.h>

int main()
{
	int input_num;
	scanf("%d", &input_num);
	while(0 < input_num--)
	{
		int sides[3];
		scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);

		for(int i = 0; i < 2; i++)
		{
			if(sides[i] > sides[i+1])
			{
				int swap = sides[i];
				sides[i] = sides[i+1];
				sides[i+1] = swap;
 			}
		}
		printf("%s\n", (sides[0]*sides[0]+sides[1]*sides[1]==sides[2]*sides[2]) ? "YES" : "NO");
	}
	return 0;
}