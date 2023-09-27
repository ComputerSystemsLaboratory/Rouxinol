#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int bubbleSort(int *a, int n);

int main()
{
	int n;
	int a[100];
	int cnt;

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	cnt = bubbleSort(a, n);

	for (int i = 0; i < n; i++){
		if (i == n - 1){
			cout << a[i] << endl;
		}
		else {
			cout << a[i] << " ";
		}
	}
	cout << cnt << endl;

	return (0);
}

int bubbleSort(int *a, int n)
{
	int cnt = 0;

	for (int i = 0; i < n - 1; i++){
		for (int j = n - 1; j > 0; j--){
			if (a[j] < a[j - 1]){
				swap(a[j], a[j - 1]);
				cnt++;
			}
		}
	}
	return (cnt);
}