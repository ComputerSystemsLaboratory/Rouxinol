#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	for(;;)
	{
		std::vector<int> a(4);

		std::vector<int> b(4);

		for(size_t i=0; i<4; ++i)
		{
			std::cin >> a[i];
		}

		if(std::cin.eof())
		{
			break;
		}

		for(size_t i=0; i<4; ++i)
		{
			std::cin >> b[i];
		}

		int countHit=0, countBlow=0;

		
		for(size_t i=0; i<4; ++i)
		{
			if(a[i]==b[i])
			{
				++countHit;
			}
		}

		for(size_t i=0; i<4; ++i)
		{
			for(size_t j=0; j<4; ++j)
			{
				if(a[i]==b[j])
				{
					++countBlow;
				}
			}
		}

		countBlow -= countHit;

		std::cout << countHit << ' ' << countBlow << '\n';
	}
}