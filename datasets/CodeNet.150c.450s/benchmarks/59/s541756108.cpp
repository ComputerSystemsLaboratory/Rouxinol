#include <iostream>
#include <stdlib.h>

using namespace std;

void show(int n, int* series) {

	for (int i = 0; i < n; i++)
	{
		cout << series[i];
		if (i != (n - 1)) cout << " ";
		else cout << endl;
	}
}

void insertionSort(int n, int* series) {
	int v,j;
	for (int i = 1; i < n; i++)
	{
		v = series[i];
		j = i - 1;
		while(j >= 0 && series[j] > v) {
			series[j + 1] = series[j];
			j--;
		}
		series[j + 1] = v;
		show(n, series);
	}

}

int main() {
	int n, *series;
	cin >> n;

	series = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		cin >> series[i];
	}
	show(n, series);
	insertionSort(n,series);
	free(series);
	return 0;
}