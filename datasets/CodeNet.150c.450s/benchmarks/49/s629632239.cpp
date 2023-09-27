#include <cstdio>
#include <algorithm>

// hona method

int main()
{
	while(1)
	{
		int judges;
		int scores[1024];
		int total = 0;

		::scanf("%i", &judges);

		if(judges == 0)
		{	break;	}
		
		for(int j = 0; j < judges; j ++)
		{
			::scanf("%i", &scores[j]);
		}

		std::sort(scores, scores + judges);

		/*for(int j = 0; j < judges; j ++)
		{
			::printf("%i\n", scores[j]);
		}*/
		for(int j = 1; j < judges - 1; j ++)
		{
			total += scores[j];
		}
		printf("%i\n", total / (judges - 2));
	}
}