#include<iostream>
#include<vector>

int main()
{
	std::vector<int> a(4);

	std::vector<int> b(4);

	int hit,blow;

	for(;;)
	{
		for(int i=0;i<4;++i)
		{
			std::cin >> a[i];
		}

		for(int i=0;i<4;++i)
		{
			std::cin >> b[i];
		}

		if(std::cin.eof())
		{
			break;
		}

		hit=0;
		blow=0;

		for(int i=0;i<4;++i)
		{
			if(a[i]==b[i])
				++hit;
		}

		for(int i=0;i<4;++i)
		{
			for(int j=0;j<4;++j)
			{
				if(i!=j && b[i]==a[j])
				{
					++blow;
				}
			}
		}

		std::cout << hit << ' ' << blow << '\n';
	}
}