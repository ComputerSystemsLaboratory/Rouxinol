#include <iostream>
#include <utility>

using namespace std;

void output(int n, int element[])
{
	for (int i = 0; i < n - 1; i++)
		cout << element[i] << " ";
	cout << element[n - 1] << endl;
}

int bubble_sort(int n, int element[])
{
	int swap_count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; i < j; j--) {
			if (element[j] < element[j - 1])
				swap(element[j], element[j - 1]), swap_count++;
		}
	}
	return swap_count;
}

int main()
{
	int n, element[100];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> element[i];
	}
	int swap_count = bubble_sort(n, element);
	output(n, element);
	cout << swap_count << endl;
	return 0;
}