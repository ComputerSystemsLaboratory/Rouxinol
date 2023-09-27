#include <iostream>
using namespace std;
void swap(int& a, int& b){
	int t;
	t = a;
	a = b;
	b = t;
}

void baburu(int y[], int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = n - 1; j > i; j--){
			if(y[j -1] > y[j]){
				swap(y[j - 1], y[j]);
			}
		}
	}
}

int main()
{
	int x[10];
	int j = 0;
	while(j <= 9){
		cin >> x[j];
		j++;
	}
	baburu(x, 10);
	cout << x[9] << "\n";
	cout << x[8] << "\n";
	cout << x[7] << "\n";
}