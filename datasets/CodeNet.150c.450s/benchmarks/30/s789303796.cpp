#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int selectionSort(int *a, int n);

int main()
{
	int n;
	int a[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	int cnt;
    cnt = selectionSort(a, n);

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

int selectionSort(int *a, int n)
{
	int cnt = 0;

	for (int i = 0; i < n - 1; i++){
		int minj = i;
		for (int j = i; j < n; j++){
			if (a[j] < a[minj]){
				minj = j;
			}
		}
		swap(a[i], a[minj]);
		if (i != minj){
			cnt++;
		}
	}

	return (cnt);
}