#include <iostream>
using namespace std;
#include <algorithm>

int main(void){

	int n;
	int a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int mini;
	int count = 0;
	for (int i = 0; i < n - 1; i++){

		mini = i;
		for (int j = i; j < n; j++){
			if (a[j] < a[mini])
				mini = j;
		}

		if (i != mini){
			swap(a[i], a[mini]);
			count++;
		}
	}

	for (int i = 0; i < n - 1; i++)
		cout << a[i] << ' ';
	cout << a[n - 1] << endl << count << endl;
}