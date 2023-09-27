#include <iostream>

unsigned long long Factorial(int n)
{
	unsigned long long ans=n;
	while(--n>0)
	{
		ans *= n;
	}
	return ans;
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << Factorial(n) << '\n';
}