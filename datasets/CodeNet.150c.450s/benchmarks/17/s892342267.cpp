#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> num(5);

	std::cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

	std::sort(num.begin(),num.end());

	for(size_t i=0; i<num.size()-1; ++i)
	{
		std::cout << num[num.size()-1-i] << ' ';
	}

	std::cout << num[0] << '\n';
}