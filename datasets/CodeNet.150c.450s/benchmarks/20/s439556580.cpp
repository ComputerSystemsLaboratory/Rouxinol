#include<iostream>

int main()
{
	int sin, sec, min, hour;
	std::cin >> sin;
	min = sin / 60;
	hour = sin / (60 * 60);
	min = min % 60;
	sec = sin % 60;
	std::cout << hour << ":" << min << ":" << sec << std::endl;

	return 0;
}