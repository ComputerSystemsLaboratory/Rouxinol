#include<iostream>
#include<vector>

int main()
{
	int d;

	while(std::cin >> d)
	{
		int vol=0;

		for(int i=1; i*d<600; ++i)
		{
			vol += d*(d*i)*(d*i);
		}

		std::cout << vol << '\n';
	}

}