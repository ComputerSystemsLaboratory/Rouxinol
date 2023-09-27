#include <iostream>
using namespace std;

void swap(int *, int *);

int main()
{
	int x,y;

	while (1)
	{

		cin >> x >> y;


		if (x == 0 && y == 0)
			break;

		if (x>y)
		swap(&x, &y);

		cout << x << " " << y << endl;

	}
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}