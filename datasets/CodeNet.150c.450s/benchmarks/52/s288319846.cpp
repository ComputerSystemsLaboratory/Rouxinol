#include<iostream>
#include<vector>

int main()
{
	std::vector<int> train;

	std::vector<int> out;

	int n;

	while(std::cin >> n)
	{
		if(n!=0)
		{
			train.push_back(n);
		}
		else
		{
			out.push_back(train[train.size()-1]);

			train.pop_back();
		}
	}

	for(size_t i=0;i<out.size();++i)
	{
		std::cout << out[i] << '\n';
	}
}