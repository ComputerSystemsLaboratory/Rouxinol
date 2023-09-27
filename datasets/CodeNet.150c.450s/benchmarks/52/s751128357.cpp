#include<iostream>
#include<vector>

int main(void)
{
	std::vector<int> incar;

	int n;

	while(std::cin >> n)
	{
		size_t isize=incar.size(); 
		if(n==0)
		{
			//outcar.push_back(incar[isize-1]);
			std::cout << incar[isize-1] << '\n';

			incar.pop_back();
		}
		else
		{
			incar.push_back(n);
		}
	}
}