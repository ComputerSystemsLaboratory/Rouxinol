#include <iostream>

int main(void)
{
	while(true)
	{
		int a[10]={0},b[10]={0},n;
		for(int i=1; i<=4; i++)
		{
			if(!(std::cin >> n))
				return 0;
			a[n]=i;
		}
		for(int i=1; i<=4; i++)
		{
			if(!(std::cin >> n))
				return 0;
			b[n]=i;
		}

		int hit=0,blow=0;
		for(int i=0; i<=9; i++){
			if(b[i] == 0)
				continue;
			if(a[i] == b[i])
				hit++;
			else if(a[i]!=0)
				blow++;
		}
		std::cout << hit << " " << blow << std::endl;
	}
}