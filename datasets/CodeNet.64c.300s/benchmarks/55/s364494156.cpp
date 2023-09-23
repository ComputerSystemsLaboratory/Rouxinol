#include<iostream>

int main()
{
		int i=1, in;
		while(true)
		{
				std::cin >> in;
				if(in == 0) break;
				std::cout << "Case " << i << ": " << in << "\n";
				i++;
		}
		return 0;
}