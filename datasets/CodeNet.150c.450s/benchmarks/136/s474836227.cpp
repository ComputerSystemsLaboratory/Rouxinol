#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	if(*b > *a) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main()
{
	int a, b;

	while (cin >> a >> b)
	{
		int A = a, B = b;
		while (a != b) {
			swap(&a, &b);

			a -= b;
		}

		cout << a << ' ' << (A/a)*B << endl;
	}

	return 0;
}