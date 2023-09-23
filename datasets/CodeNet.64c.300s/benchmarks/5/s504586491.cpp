#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void isort(int b[]) {
	int c[10],max = 0, k = 0;
	for (int i = 0; i < 10; i++) {
		max = b[i];
		for (int j = i; j < 10; j++) {
			if (max < b[j]) {
				swap(&max, &b[j]);
			}
		}
		c[i] = max;
	}
	k = 0;
	while (k < 3) {
		cout << c[k] << endl;
		k++;
	}
}

int main()
{
	int a[10], i = 0;
	while (i < 10) {
		cin >> a[i];
		i++;
	}
	isort(a);
	
    return 0;
}