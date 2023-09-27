#include<iostream>
#include<vector>

std::vector<int> factrize(int n)
{
	std::vector<int> res;
	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			res.push_back(i);
			n /= i;
		}
	}
	if (n != 1)
		res.push_back(n);
	return res;
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> res = factrize(n);
	std::cout << n << ": ";
	for (std::vector<int>::iterator i = res.begin(); i != res.end(); i++)
	{
		std::cout << *i;
		if (i != res.end() - 1)
			std::cout << ' ';
	}
	std::cout << std::endl;
}
