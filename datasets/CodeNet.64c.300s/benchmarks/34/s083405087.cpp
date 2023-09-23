#include <iostream>
#include <cstdio>
using namespace std;


void print_array(int *x, int n)
{
	for (int k = 0; k < n; ++k)
	{
		if (k == n- 1)
		{
			printf("%d\n", x[k]);
		}
		else
		{
			printf("%d ", x[k]);
		}
	}
}


int main(int argc, char const *argv[])
{
	int n = 0, key = 0, j;
	cin >> n;

	int array[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> array[i];
	}

	print_array(array, n);

	/*===== insertion sort =====*/
	for (int i = 1; i < n; ++i)
	{
		key = array[i];
		j = i - 1;
		while(j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
		print_array(array, n);
	}

	return 0;
}