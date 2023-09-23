#include <iostream>


int main()
{
	while(1)
	{
		int num,ans,kazu=0;
		std::cin >> num >> ans;
			if(num == 0 && ans == 0)
			{
				return 0;
			}
		for(int i=1; i<=num-2; i++)
		{
			for(int j=i+1; j<=num-1; j++)
			{
				for(int k=j+1; k<=num; k++)
				{
					if(i+j+k == ans)
					{
						kazu++;
					}
				}
			}
		}
	std::cout << kazu << std::endl;
	}
}