#include <iostream>
using namespace std;

void showArray(int x[], int n){
	for (int i = 0; i < n; i++) {
		cout << x[i];
		if (i != n-1)	cout << " ";
	}
	cout << endl;
}

int main(){
	int n, v, i, j;
	int a[100];
	cin >> n;
	for (i = 0; i < n; i++)	cin >> a[i];
	showArray(a, n); 
	for (i = 1; i < n; i++) {
		v = a[i];
		j = i-1;
		while (j >= 0 && v < a[j]) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
		showArray(a, n);
	}
	return 0;
}