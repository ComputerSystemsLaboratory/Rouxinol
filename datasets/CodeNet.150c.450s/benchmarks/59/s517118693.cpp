#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int n;
	int array[1024];
	int tmp;

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < n; i++){
		if (i == n - 1){
			cout << array[i] << endl;
		}
		else {
			cout << array[i] << " ";
		}
	}

	for (int i = 1; i < n; i++){
		tmp = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > tmp){
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = tmp;

		for (int k = 0; k < n; k++){
			if (k == n - 1){
				cout << array[k] << endl;
			}
			else {
				cout << array[k] << " ";
			}
		}
	}

	return (0);
}