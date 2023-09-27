#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(void)
{	
	int num;
	int val[10000] = { 0 };
	int mem_max = -1000000, mem_min = 10000000;
	long sum = 0;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> val[i];
	}

	for (int i = 0; i < num; i++)
	{
		if (val[i] > mem_max)
			mem_max = val[i];
		if (val[i] < mem_min)
			mem_min = val[i];

		sum += val[i];
	}

	printf("%d %d %Ld\n", mem_min, mem_max, sum);



}