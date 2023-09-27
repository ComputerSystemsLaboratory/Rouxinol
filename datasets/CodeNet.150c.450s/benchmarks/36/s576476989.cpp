#include<iostream>
#include<vector>

int main()
{
	int d;

	while(std::cin >> d)
	{
		int s = 0;

		for(int i=0;i<(600/d);++i)
		{
			s+=(i*d)*(i*d)*d;
		}

		std::cout << s << '\n';
	}
}