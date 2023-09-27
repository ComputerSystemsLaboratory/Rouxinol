#include<iostream>
int main() 
{
	int x,i=0;
	while (1)
	{
		
		std::cin >> x;
		if (x == 0)
		{
			break;
		}
		i += 1;
		std::cout << "Case" <<" "<<i<<":"<<" "<< x << std::endl;
	}
	return 0;
}
