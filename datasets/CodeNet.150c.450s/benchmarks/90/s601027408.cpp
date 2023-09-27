#include <iostream>

int main(void)
{
	int count[100]={0},n;
	while(std::cin >> n)
		count[n-1]++;

	int max=0;
	for(int i=0; i<100; i++)
		if(count[i] > max)
			max = count[i];
	for(int i=0; i<100; i++)
		if(max == count[i])
			std::cout << i+1 << std::endl;
	return 0;
}