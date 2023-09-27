#include <stdio.h>

int main(void)
{
	int in;
	int out[1000] = {0};

	int rem = 0;
	int rnd = 0;


	while(1)
	{
		scanf("%d",&in);

		if(in == 0)
			break;

		rem = 1000 - in;

		while(rem)
		{
			if(rem >= 500){
				rem -= 500;
				out[rnd]++;
				}else

			if(rem >= 100){
				rem -= 100;
				out[rnd]++;
				}else

			if(rem >= 50){
				rem -= 50;
				out[rnd]++;
				}else

			if(rem >= 10){
				rem -= 10;
				out[rnd]++;
				}else

			if(rem >= 5){
				rem -=5;
				out[rnd]++;
				}else

			if(rem >= 1){
				rem -= 1;
				out[rnd]++;
				}
		}

		rnd++;

	}



	for( in = 0 ; in < rnd ; in++){
		printf("%d\n",out[in]);}

	return 0;
}