#include <iostream>
// #inclu
using namespace std;

const int MAX_N = 100;
int a[MAX_N];

int selectionSort(int a[], int n);

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)  cin >> a[i];
	int ex = selectionSort(a, n);
	for(int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << a[i];
	}
	cout << endl;
	cout << ex << endl;

	return 0;
}

int selectionSort(int a[], int n){
	int ex = 0;
	for(int i = 0; i < n; i++){
		int minj = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[minj]) minj = j;
		}
		swap(a[i],a[minj]);
		if (i != minj) ex++;
	}
	return ex;
}