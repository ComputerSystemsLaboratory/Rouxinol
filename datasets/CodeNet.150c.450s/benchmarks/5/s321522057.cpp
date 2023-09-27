#include <iostream>
using namespace std;

int main(){
	int n;
	int *a;
	
	cin >> n;
	a = new int[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if(i != 0)	cout << " ";
		cout << a[n - i - 1];
	}
	cout << endl;
	delete[] a;
	
	return 0;
}