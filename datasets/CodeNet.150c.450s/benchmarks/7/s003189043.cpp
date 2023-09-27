#include <cstdlib> 
#include <iostream>

using namespace std;

int cmp(int* a, int* b)
{
	return (*a < *b) ? 1 : ((*a > *b) ? -1 : 0);
}

int main()
{
	int dat[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> dat[i];
	}

	qsort(dat, 10, sizeof(int), reinterpret_cast<int(*) (const void*, const void*)>(cmp));

	for (int i = 0; i < 3; i++)
	{
		cout << dat[i] << endl;
	}

	return 0;
}