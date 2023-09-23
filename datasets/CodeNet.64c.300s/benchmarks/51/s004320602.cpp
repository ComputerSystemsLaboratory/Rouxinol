#include<iostream>

int main()
{
	int n;

	unsigned long long int s=1;

	std::cin >> n;

	for(int i=1;i<=n;++i)
	{
		s*=i;
	}

	std::cout << s << '\n';
}