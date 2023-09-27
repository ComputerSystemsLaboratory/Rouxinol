#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
	int w;
	std::cin >> w;
	int*nums = new int[w];
	for(int i = 0; i < w; i++)
	{
		nums[i] = i + 1;
	}
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		int a, b;
		char foo;
		std::cin >> a >> foo >> b;
		int temp = nums[a - 1];
		nums[a - 1] = nums[b - 1];
		nums[b - 1] = temp;
	}
	for(int i = 0; i < w; i++)
	{
		std::cout << nums[i] << std::endl;
	}
	delete[]nums;
	return 0;
}
