#include<iostream>
int main()
{
	int v1, v2, v3;
	std::cin >> v1 >> v2 >> v3;
	if ( v1 < v2 && v2 < v3 )
	{
	std::cout << "Yes" << std::endl;
	}
	else
	{
	std::cout << "No" << std::endl;
	}
	return 0;
}
