#include<iostream>
#include<cmath>
#include<string>

int main(int, char**)
{
	int time = 0;
	std::cin >> time;

	std::cout << (time / 3600) << ":" << ((time % 3600) / 60) << ":" << (time % 60) << std::endl;
}
