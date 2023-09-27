#include <iostream>

using namespace std;

void output(int n, int *elements)
{
	for (int i = 0; i < n - 1; i++)
		cout << elements[i] << " ";
	cout << elements[n - 1] << endl;
}

void insertion_sort(int n, int *elements)
{
	for (int i = 1; i < n; i++) {
		int key = elements[i];
		int j = i - 1;
		while (0 <= j && key < elements[j]) {
			elements[j + 1] = elements[j];
			j--;
		}
		elements[j + 1] = key;
		output(n, elements);
	}
}

int main()
{
	int n, elements[100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> elements[i];
	output(n, elements);
	insertion_sort(n, elements);
	return 0;
}