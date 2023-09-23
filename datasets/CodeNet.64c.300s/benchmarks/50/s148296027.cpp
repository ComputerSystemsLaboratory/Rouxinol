#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, a[100];
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int c = 0, f = 1;
	while (f){
		f = 0;
		for (int i = n - 1; 0 < i; i--){
			if (a[i] < a[i - 1]){
				swap(a[i], a[i - 1]);
				f = 1;
				c++;
			}
		}
	}
	
	cout << a[0];
	for (int i = 1; i < n; i++){
		cout << ' ' << a[i];
	}
	
	cout << endl << c << endl;
	
	return (0);
}